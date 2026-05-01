#include <stdio.h>
#include <stdlib.h>

void solve_hanoi(const int ring_count){
    if (ring_count <= 0) return;

    int total_moves = (1 << ring_count) - 1;
    int is_odd = ring_count & 1;

    /* allocate buffer for move sequence (one char per move) */
    char *move_order = malloc((size_t)total_moves);
    if (!move_order){
        perror("malloc");
        return;
    }

    /* allocate buffer to track current position of each disk (initially all 0) */
    int *disk_pos = calloc((size_t)ring_count, sizeof(int));
    if (!disk_pos){
        perror("calloc");
        free(move_order);
        return;
    }

    /* fill move_order: disk i moves on positions 1<<i, step 1<<(i+1) */
    for(int i=0; i<ring_count; i++){
        int c_ring_pos = 1 << i;
        int inc_amount = 1 << (i+1);
        move_order[c_ring_pos-1] = i + 1;
        for(int j=0; j<(1 << (ring_count-(i+1)))-1; j++){
            c_ring_pos += inc_amount;
            move_order[c_ring_pos-1] = i + 1;
        }
    }

    for(int i=0; i<total_moves; i++){
        int disk = move_order[i];
        int current_peg = disk_pos[disk - 1];
        int next_peg;
        if((move_order[i]+is_odd) & 1){
            next_peg = (current_peg + 1) % 3;
        } else {
            next_peg = (current_peg + 2) % 3;
        }
        printf("Move disk %d from Peg %d to Peg %d\n", disk, current_peg + 1, next_peg + 1);
        disk_pos[disk - 1] = next_peg;
    }

    free(disk_pos);
    free(move_order);
}

int main(){
    int r;
    printf("Enter number of rings: ");
    if (scanf("%d", &r) != 1) return 1;

    if (r <= 0) {
        fprintf(stderr, "number_of_rings must be positive\n");
        return 1;
    }
    if (r > 20){
        r = 20; /* keep shifts safe for 32-bit int */
    }

    solve_hanoi(r);
    return 0;
}

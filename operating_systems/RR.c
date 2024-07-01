#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 10
int i,j;
typedef struct {
    int pid;
    int burst_time;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
} Process;

void preemptive_round_robin(Process processes[], int n, int time_quantum) {
    int current_time = 0;
    int completed = 0;
    int queue[MAX_PROCESSES];
    int front = 0, rear = 0;

    
    for ( i = 0; i < n; i++) {
        queue[rear++] = i;
    }

    while (completed != n) {
        int idx = queue[front];
        front = (front + 1) % MAX_PROCESSES;

        if (processes[idx].remaining_time <= time_quantum) {
            current_time += processes[idx].remaining_time;
            processes[idx].turnaround_time = current_time;
            processes[idx].waiting_time = processes[idx].turnaround_time - processes[idx].burst_time;
            completed++;
        } else {
            current_time += time_quantum;
            processes[idx].remaining_time -= time_quantum;
            queue[rear++] = idx;
            rear %= MAX_PROCESSES;
        }
    }
}

void non_preemptive_round_robin(Process processes[], int n, int time_quantum) {
    int current_time = 0;
    int completed = 0;
    int queue[MAX_PROCESSES];
    int front = 0, rear = 0;

    
    for ( i = 0; i < n; i++) {
        queue[rear++] = i;
    }

    while (completed != n) {
        int idx = queue[front];
        front = (front + 1) % MAX_PROCESSES;

        current_time += processes[idx].remaining_time;
        processes[idx].turnaround_time = current_time;
        processes[idx].waiting_time = processes[idx].turnaround_time - processes[idx].burst_time;
        completed++;
    }
}

int main() {
    Process processes[MAX_PROCESSES];
    int n, time_quantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the time quantum: ");
    scanf("%d", &time_quantum);

    for ( i = 0; i < n; i++) {
    	printf("Enter the burst times for each process:\n");
        processes[i].pid = i + 1;
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
    }

    printf("\nPreemptive Round Robin Scheduling:\n");
    preemptive_round_robin(processes, n, time_quantum); 
    printf("\n-----------------------------------------------\n");
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for ( i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burst_time,
               processes[i].waiting_time, processes[i].turnaround_time);
    }

    printf("\nNon-Preemptive Round Robin Scheduling:\n");
    non_preemptive_round_robin(processes, n, time_quantum);
    printf("\n-----------------------------------------------\n");
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for ( i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].burst_time,
               processes[i].waiting_time, processes[i].turnaround_time);
    }

    return 0;
}

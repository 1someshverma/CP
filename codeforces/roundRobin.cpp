#include<iostream>
#include<algorithm>
using namespace std;
struct process{
    char processID;
    int aTime;
    int bTime;
    int remTime;
    int waitingTime;
    int turnAroundTime;
};
void drawGanttChart(process pro,int quantum,int n){
    
}
void findWaitingTime(process *pro,int quantum,int n){
    int t=0;
    while (1)
    {
       bool done=true;
       for(int i=0;i<n;i++){
           if(pro[i].remTime>0){
               done=false;
               if(pro[i].remTime>quantum){
                   t+=quantum;
                   pro[i].bTime-=quantum;
               }
           }else{
               t+=pro[i].remTime;
               pro[i].waitingTime=t-pro[i].bTime;
               pro[i].bTime=0;
           }
       }
       if(done==true){
           break;
       }
    }
}
void findTurnAroundTime(process *pro,int n){
    for(int i=0;i<n;i++){
        pro[i].turnAroundTime=pro[i].bTime+pro[i].waitingTime;
    }
}
void findAvgTime(process *pro,int n,int quantum){
    findWaitingTime(pro,quantum,n);
    findTurnAroundTime(pro,n);
    int totalTurnAroundTime=0,totalWaitingTime=0;
    for(int i=0;i<n;i++){
        totalWaitingTime=totalWaitingTime+pro[i].waitingTime;
        totalTurnAroundTime+=pro[i].turnAroundTime;
    }
    cout<<"AVERAGE WAITING TIME = "<<(float)totalTurnAroundTime/(float)n<<endl;
    cout<<"AVERAGE TURNAROUND TIME = "<<(float)totalTurnAroundTime/(float)n<<endl;
}
bool sortProcess(process a,process b){
    return a.aTime< b.aTime;
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF PROCESSES"<<endl;
    cin>>n;
    struct process *pro=(process *)malloc(sizeof(process)*n);
    // int *remTime=(int *)malloc(sizeof(int)*n);
    // int *burstTime=(int *)malloc(sizeof(int)*n);

    cout<<"ENTER PROCESS ID,ARRIVAL TIME AND BURST TIME"<<endl;
    for(int i=0;i<n;i++){
        cin>>pro[i].processID>>pro[i].aTime>>pro[i].bTime;
        pro[i].remTime=pro[i].bTime;
    }
    for(int i=0;i<n;i++){
        cout<<pro[i].processID<<" "<<pro[i].aTime<<" "<<pro[i].bTime<<endl;
    }
    int quantum;
    cout<<"ENTER TIME QUANTAM "<<endl;
    cin>>quantum;
    sort(pro,pro+n,sortProcess);
    findWaitingTime(pro,quantum,n);

    free(pro);
}
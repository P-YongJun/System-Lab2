#include <numeric>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

typedef struct{
    char name[20];
    int midTest_score;
    int finTest_score;
}node;

int main(){
    int stu_count;
    map<int, node> map;

    printf("Insert student count number : ");
    scanf("%d", &stu_count);

    for(int i=0; i<stu_count; i++){
            node node;

            printf("Insert student information : ");
            scanf("%s %d %d", node.name, &node.midTest_score, &node.finTest_score);

            map.emplace(i, node);
    }

    for(auto i = begin(map); i!= end(map); ++i){
        cout << i->second.name<<" "<<i->second.midTest_score<<" "
                                        <<i->second.finTest_score<<endl;
    }
}
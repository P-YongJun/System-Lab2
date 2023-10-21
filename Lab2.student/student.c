#include <search.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* name;
    int midTest_score;
    int finTest_score;
}node;

char* stu_nametable;
node* nodetable;
node* root = NULL;

int compare(const void *cp1, const void *cp2){
    return strcmp(((node *)cp1)->name, ((node *)cp2)-> name);
}

void print_node(const void *, VISIT, int);

int main()
{
        int stu_count;
        printf("Insert student count number : ");
        scanf("%d", &stu_count);

        stu_nametable = (char *) malloc(sizeof(char) * stu_count);
        nodetable = (node *) malloc(sizeof(node) * stu_count);

        char *studentptr = stu_nametable;
        node *nodeptr = nodetable;
        node **ret;
        int i =0;

        for(int i=0; i<stu_count; i++){
            printf("Insert student information : \n");
            scanf("%s %d %d", studentptr, &nodeptr -> midTest_score, &nodeptr ->finTest_score);

            nodeptr -> name = studentptr;

            ret = (node**) tsearch ((void *) nodeptr, (void **) &root, compare);
            printf("\"%s\"", (*ret)->name);

            if(*ret == nodeptr)
                    printf("has been added to the tree. \n");

            if(*ret == nodeptr)
                    printf("has been added to the tree. \n");
            else
                    printf("already exists in the tree. \n");

            studentptr += strlen(studentptr) + 1;
            nodeptr++;
        }

        twalk((void *) root, print_node);

        free(stu_nametable);
        free(nodetable);

        return 0;
}

void print_node(const void *nodeptr, VISIT order, int level){
    if(order == preorder || order == leaf){
            printf("student_name = %-10s, midTest_score = %d, finalTest_score = %d\n",
                            (*(node **)nodeptr) ->name,
                            (*(node **)nodeptr)->midTest_score,
                            (*(node **)nodeptr)->finTest_score);
    }
}
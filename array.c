/*#include <stdio.h>
int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the marks of students %d:  ",i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" the marks of student %d is: %d\n",i+1, marks[i]);
        
    }
        return 0;
}*/
#include <stdio.h>
void display(int age1, int age2) {
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int main() {
  int ageArray[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  display(ageArray[1], ageArray[2]); 
  return 0;
}
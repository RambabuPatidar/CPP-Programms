#include <stdio.h>

struct student
{
    int roll_number;
    char name[20];
    int total;
    int phy, chem, maths, eng, hin;
    float perc;
};

int main()
{
    int n;
    printf("number of student\n\n");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        struct student st;

        printf("details of student %d \n", i + 1);
        printf("Enter the roll number\n");
        scanf("%d", &st.roll_number);
        printf("Enter the name of student\n");
        scanf("%s", &st.name);
        printf("Enter the marks of physics\n");
        scanf("%d", &st.phy);
        printf("Enter the marks of chemistry\n");
        scanf("%d", &st.chem);
        printf("Enter the marks of maths\n");
        scanf("%d", &st.maths);
        printf("Enter the marks of english\n");
        scanf("%d", &st.eng);
        printf("Enter the marks of hindi\n");
        scanf("%d", &st.hin);

        // calculating total marks

        st.total = st.phy + st.chem + st.maths + st.eng +
                      st.hin;

        // calculating percentage of student
        st.perc = ((st.phy + st.chem + st.maths + st.eng +
                       st.hin) /
                      500.0) *
                     100;

        // printing data
        printf("\n\nRoll number -> %d \n", st.roll_number);
        printf("Name -> %s \n", st.name);
        printf("Marks");
        printf("Physics -> %d\n", st.phy);
        printf("chemistry -> %d\n", st.chem);
        printf("Maths -> %d\n", st.maths);
        printf("English -> %d\n", st.eng);
        printf("Hindi -> %d\n", st.hin);
        printf("Total Marks ->%d\n", st.total);
        printf("Percentage -> %f\n", st.perc);

        printf("Result -> ");
        if (st.perc >= 33.333333)
            printf("Pass");
        else
        {
            printf("Fail");
        }
        printf("\n");
    }

    return 0;
}
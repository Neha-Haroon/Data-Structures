#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct student
{
  char name[10];
  int marks;
  int gp;
};

int
main ()
{
  struct student *ptr;
  int i, n;

  printf ("Enter the number of persons: ");
  scanf ("%d", &n);

  // allocating memory for n numbers of struct person
  ptr = (struct student *) malloc (n * sizeof (struct student));

  for (i = 0; i <=n; ++i)
    {
      printf ("Enter first name and  marks and GPA respectively: ");

      // To access members of 1st struct person,
      // ptr->name and ptr->age is used

      // To access members of 2nd struct person,
      // (ptr+1)->name and (ptr+1)->age is used
      scanf ("%s %d %d", (ptr + i)->name, &(ptr + i)->marks, &(ptr + i)->gp);
    }

  printf ("Displaying Information:\n");
  for (i = 0; i < n; ++i)
    printf ("Name: %s\tmarks : %d\t ,gp : %d\n", (ptr + i)->name,
	    (ptr + i)->marks, (ptr + i)->gp);
  int c = 0, to_search, a;
  printf ("enter search data : ");
  scanf ("%d", &to_search);
  printf ("select 1----->linear search \n select 2 ----> binary search\n ");
  scanf ("%d", &a);
  if (a == 1)
    {
      for (i = 0; i < 5; ++i)
        {
            if (to_search == (ptr + i)->marks)
            {
                c = 1;
                printf ("found data at index ");
                break;
            }
        }
      if (c == 0)
        printf ("not found");
    }
  if (a == 2)
    {
        int i,l = 0, s=n;
        int r = s - 1,cg=0, m;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (to_search == (ptr + i)->marks)
                {
                    cg = 1;
                    printf ("data found at place");
                    break;
                }
            else
            {
                if (to_search < (ptr + i)->marks)
                    r = m - 1;
                else
                {
                    l = m + 1;
                }
            }
        i+=1;
        }
      if (cg == 0)
        printf ("not found");
    }
  return 0;
}

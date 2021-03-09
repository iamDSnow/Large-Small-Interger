//Programmer: Derrick Snow Jr
// Program: Large-Small Lab
//Purpose: Calculate and display the largest and smallest interger

#include<stdio.h>

FILE *fp;

int main (void) {
    int i;
    
    fp = fopen ("csis.txt", "w");
    for (i = 1; i <= 4; ++i) {
    int compare(int firstnum,int secondnum,int thirdnum,int fourthnum, int y)
    { return firstnum, secondnum, thirdnum, fourthnum, y;
}
int firstnum, secondnum, thirdnum, fourthnum, y; 

  printf("Enter First Integer: "); 
  scanf("%d", &firstnum);	// First Interger
  printf("Enter Second Integer: "); 
  scanf("%d", &secondnum);	// Second Interger
  printf("Enter Third Integer: "); 
  scanf("%d", &thirdnum);	// Third Interger
  printf("Enter Fourth Integer: "); 
  scanf("%d", &fourthnum);	// fourth Interger

  if (firstnum > secondnum && firstnum > thirdnum && firstnum > fourthnum) 
    {
        if (secondnum < thirdnum && secondnum < fourthnum)
	{
	  y = secondnum;
	}
      else if (thirdnum < secondnum && thirdnum < fourthnum)
	{
	  y = thirdnum;
	}
      else if (fourthnum < secondnum && fourthnum < thirdnum)
	{
	  y = fourthnum;
	}

      printf ("Largest: %d\n", firstnum);
      printf ("Smallest: %d\n", y);
    }
  else if (secondnum > firstnum && secondnum > thirdnum
	   && secondnum > fourthnum)
    {
      if (firstnum < thirdnum && firstnum < fourthnum)
	{
	  y = firstnum;
	}
      else if (thirdnum < firstnum && thirdnum < fourthnum)
	{
	  y = thirdnum;
	}
      else if (fourthnum < firstnum && fourthnum < thirdnum)
	{
	  y = fourthnum;
	}
      printf ("Largest: %d\n", secondnum);
      printf ("Smallest: %d\n", y);
    }
  else if (thirdnum > firstnum && thirdnum > secondnum
	   && thirdnum > fourthnum)
    {
      if (firstnum < secondnum && firstnum < fourthnum)
	{
	  y = firstnum;
	}
      else if (secondnum < firstnum && secondnum < fourthnum)
	{
	  y = secondnum;
	}
      else if (fourthnum < firstnum && fourthnum < secondnum)
	{
	  y = fourthnum;
	}
      printf ("Largest: %d\n", thirdnum);
      printf ("Smallest: %d\n", y);
    }
  else if (fourthnum > firstnum && fourthnum > secondnum
	   && fourthnum > thirdnum)
    {
      if (firstnum < secondnum && firstnum < thirdnum)
	{
	  y = firstnum;
	}
      else if (secondnum < firstnum && secondnum < thirdnum)
	{
	  y = secondnum;
	}
      else if (thirdnum < firstnum && thirdnum < secondnum)
	{
	  y = thirdnum;
	}
      printf ("Largest: %d\n", fourthnum);
      printf ("Smallest: %d\n", y);
    }
    }
  fclose (fp);
  return 0;
}





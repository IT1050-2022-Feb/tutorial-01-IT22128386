/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/


#include <stdio.h>

int main()
{
  //variable declaration
  float dis,ans;
  char typ;

  //using a while loop 
  while(1)
  {
    //user data input
    printf("If the data is in KM press 'Y' if in M press 'N' : ");
    scanf("%c%*c",&typ);

    //using selection statement to calculate the total amount that have to     be paid
    switch(typ)
      {
        case 'Y' : printf("Enter the distance the van has travelled in KM : ");
                   scanf("%f",&dis);
                   break;
        case 'N' : printf("Enter the distance the van has travelled in M : ");
                   scanf("%f",&dis);
                   dis = dis / 1000.0;
                   break;
        default  : printf("ERROR!Plz try again\n");
                   continue;
      }
      
    
    
    //user ref materials
    printf("The first 30 km is  LKR 50/= per km.\nThe remaining is LKR 40/= per km. ");
    
    //using selection statement to calculate the total amount that have to be paid
    if(dis <= 30 && dis > 0)
    {
      ans = dis * 50;
      break;
    }
    else if(dis > 30)
    {
      ans = (30 * 50) + (dis - 30) * 40;
      break;
    }
    else
    {
      printf("ERROR!Plz try again");
      continue;
    }
  
  }
  
  //displaying the output
  printf("\n\nTotal amount to be paid : %.2f",ans);
  return 0;
}

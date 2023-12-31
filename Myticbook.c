#include<stdio.h>
void seatbookingA(char na[50],char g[50],char m[100],int amt,int n){
int seats[100];
int bookedseat=0;
printf("\nPlease enter the seat number from 1 to 30:");
for(int i=0;i<n;i++){
scanf("%d",&seats[i]);
}
    if(bookedseat==0){
    bookedseat=1;
    printf("\n");
    printf("\n");
    printf("\t***The Recipt***\n");
    printf("\n");
    printf("\tName:%s\n",na);
    printf("\tGender:%s\n",g);
    printf("\tMovie Name:%s\n",m);
    printf("\tTotal Amount:%d\n",(amt+20)*n);
    printf("\tThe Seat No:");
     for(int j=0;j<n;j++){
    printf("A%d ",seats[j]);}
    printf("\n");
    printf("\tAbove seats are booked by you");
    printf("\n");
    printf("\tYour Ticket is Successfully Booked");

    }

    else{
        printf("Sorry this seat is already booked");

    }
}
void seatbookingB(char na[50],char g[50],char m[100],int amt,int n){
int seats[100];
int bookedseat=0;
printf("\nPlease enter the seat number from 31 to 70:");
for(int i=0;i<n;i++){
scanf("%d",&seats[i]);
}
    if(bookedseat==0){
    bookedseat=1;
    printf("\n");
    printf("\n");
    printf("\t***The Recipt***\n");
    printf("\n");
    printf("\tName:%s\n",na);
    printf("\tGender:%s\n",g);
    printf("\tMovie Name:%s\n",m);
    printf("\tTotal Amount:%d\n",(amt+10)*n);
    printf("\tThe Seat No:");
     for(int j=0;j<n;j++){
    printf("B%d ",seats[j]);}
    printf("\n");
    printf("\tAbove seats are booked by you");
    printf("\n");
    printf("\tYour Ticket is Successfully Booked");

    }

    else{
        printf("Sorry this seat is already booked");

    }
}
void seatbookingC(char na[50],char g[50],char m[100],int amt,int n){
int seats[100];
int bookedseat=0;
printf("\nPlease enter the seat number from 71 to 100:");
for(int i=0;i<n;i++){
scanf("%d",&seats[i]);
}
    if(bookedseat==0){
    bookedseat=1;
    printf("\n");
    printf("\n");
    printf("\t***The Recipt***\n");
    printf("\n");
    printf("\tName:%s\n",na);
    printf("\tGender:%s\n",g);
    printf("\tMovie Name:%s\n",m);
    printf("\tTotal Amount:%d\n",amt*n);
    printf("\tThe Seat No:");
     for(int j=0;j<n;j++){
    printf("C%d ",seats[j]);}
    printf("\n");
    printf("\tAbove seats are booked by you");
    printf("\n");
    printf("\tYour Ticket is Successfully Booked");

    }

    else{
        printf("Sorry this seat is already booked");

    }
}

int main(){
printf("Karur-1\n");
printf("Namakkal-2\n");
printf("Dindugal-3\n");
printf("Salem-4\n");
int place,a=0;
printf("\nEnter your Location from (1,2,3,4):");
scanf("%d",&place);
switch(place){
case 1:
    printf("\n");
    printf("Number of theatre:2\n");
    printf("The theatres are..,\n");
    printf("1-Ajantha\n");
    printf("2-Ellora\n");
    break;
case 2:
    printf("\n");
    printf("Number of theatre:3\n");
    printf("The theatres are..,\n");
    printf("1-Shiva\n");
    printf("2-Vikram Cinemas\n");
    printf("3-R S Theatre\n");
    break;
case 3:
    printf("\n");
    printf("Number of theatre:2\n");
    printf("The theatres are..,\n");
    printf("1-Carnival\n");
    printf("2-Rajendhra\n");
    break;
case 4:
    printf("\n");
    printf("Number of theatre:3\n");
    printf("The theatres are..,\n");
    printf("1-ARRS\n");
    printf("2-Ionix Cinemas\n");
    printf("3-KS Theatre\n");
    break;
default:
    printf("\n");
    printf("Invalid location Number\n");
    printf("Please choose from (1,2,3,4)\n");
    a=1;
    break;
}
if(a==0){
printf("\nChoose a theatre:");
int theatre,b=0;
scanf("%d",&theatre);
switch(theatre){

case 1:
    if(place==1&&theatre==1){
    printf("\n");
    printf("The movies are:\n");
    printf("*Joe*->Rs.100\n");
    printf("*Siddha*->Rs.150\n");
    printf("Number of screen:1\n");
    printf("The timings of the movies are..,:\n");
    printf("Joe-->10:00 AM - 1:00 PM && 7:00 PM - 10:00 PM\n");
    printf("Siddha-->2:00 PM - 5:00 PM\n");}
    else if(place==2&&theatre==1){
    printf("\n");
    printf("The movies are:\n");
    printf("*Leo*->Rs.200\n");
    printf("*Jailer*->Rs.150\n");
    printf("*Annapoorni->Rs.100*\n");
    printf("*Japan*->Rs.100\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->Leo && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Jailer && Timing-->10:00 AM - 1:00 PM\n");
    printf("A.N:\n");
    printf("1st screen-->Annapoorni && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Japan && Timing-->1:00 PM - 5:00 PM\n");}

    else if(place==3&&theatre==1){
    printf("\n");
    printf("The movies are:\n");
    printf("*Kick*->Rs.165\n");
    printf("*Luck*->Rs.100\n");
    printf("*Joe*->Rs.200\n");
    printf("*Demon*->Rs.170\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->Kick && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Luck && Timing-->10:00 AM - 1:00 PM \n");
    printf("A.N:\n");
    printf("1st screen-->Joe && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Demon && Timing-->1:00 PM - 5:00 PM\n ");}

    else{
printf("\n");
    printf("The movies are:\n");
    printf("*Leo*->Rs.200\n");
    printf("*Jailer*->Rs.150\n");
    printf("*Annapoorni->Rs.100*\n");
    printf("*Japan*->Rs.100\n");
    printf("Number of screen:4\n");
    printf("F.N:\n");
    printf("1st screen-->Leo && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Jailer && Timing-->10:00 AM - 1:00 PM\n");
    printf("3rd screen-->Annapoorni && Timing-->10:00 AM - 1:00 PM \n");
    printf("4th screen-->Japan && Timing-->10:00 AM - 1:00 PM\n");
    printf("A.N:\n");
    printf("1st screen-->Annapoorni && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Japan && Timing-->1:00 PM - 5:00 PM\n");
    printf("3rd screen-->Jailer && Timing-->1:00 PM - 5:00 PM \n");
    printf("4th screen-->Leo && Timing-->1:00 PM - 5:00 PM\n");}

    break;
case 2:
    if(place==1&&theatre==2){
    printf("\n");
    printf("The movies are:\n");
    printf("*LGM*->Rs.210\n");
    printf("*Kolai*->Rs.150\n");
    printf("*ChandhraMugi-2*->Rs.115\n");
    printf("*Jawan*->150\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->LGM && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Kolai&& Timing-->10:00 AM - 1:00 PM\n");
    printf("A.N:\n");
    printf("1st screen-->ChandhraMugi-2 && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Jawan && Timing-->1:00 PM - 5:00 PM\n");}
    else if(place==2&&theatre==2){
    printf("\n");
    printf("The movies are:\n");
    printf("*Kick*->Rs.175\n");
    printf("*Luck*->Rs.155\n");
    printf("*Joe*->Rs.200\n");
    printf("*Iraivan*->Rs.170\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->Kick && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Luck && Timing-->10:00 AM - 1:00 PM\n");
    printf("A.N:\n");
    printf("1st screen-->Joe && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Iraivan && Timing-->1:00 PM - 5:00 PM\n");}

    else if(place==3&&theatre==2){
    printf("\n");
    printf("The movies are:\n");
    printf("*Leo*->Rs.200\n");
    printf("*Jailer*->Rs.150\n");
    printf("*Annapoorni*->Rs.155\n");
    printf("*Kick*->Rs.175\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->Leo && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Jailer && Timing-->10:00 AM - 1:00 PM \n");
    printf("A.N:\n");
    printf("1st screen-->Annapoorni && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Kick && Timing-->1:00 PM - 5:00 PM\n ");}

    else{
    printf("\n");
    printf("*Joe*->Rs.180\n");
    printf("*Siddha*->Rs.155\n");
    printf("Number of screen:1\n");
    printf("The timings of the movies are..,:\n");
    printf("Joe-->10:00 AM - 1:00 PM && 7:00 PM - 10:00 PM\n");
    printf("Siddha-->2:00 PM - 5:00 PM\n");}
    break;
case 3:
    if(place==2 && theatre==3){
    printf("\n");
    printf("The movies are:\n");
    printf("*NUN*->Rs.170\n");
    printf("*OMG*->Rs.155\n");
    printf("Number of screen:1\n");
    printf("The timings of the movies are..,:\n");
    printf("The NUN-->10:00 AM - 1:00 PM && 7:00 PM - 10:00 PM\n");
    printf("Oh my God!-->2:00 PM - 5:00 PM\n");

}  else {
    printf("\n");
    printf("The movies are:\n");
    printf("*Don*->Rs.200\n");
    printf("*Jawan*->Rs.150\n");
    printf("*OMG*->Rs.200\n");
    printf("*Nanban*->Rs.155\n");
    printf("Number of screen:2\n");
    printf("F.N:\n");
    printf("1st screen-->Don && Timing-->10:00 AM - 1:00 PM \n");
    printf("2nd screen-->Jawan && Timing-->10:00 AM - 1:00 PM \n");
    printf("A.N:\n");
    printf("1st screen-->Oh my God! && Timing-->1:00 PM - 5:00 PM \n");
    printf("2nd screen-->Nanban && Timing-->1:00 PM - 5:00 PM\n ");}
    break;
default:
    printf("\n");
    printf("Invalid Theatre Number\n");
    printf("\n");
    printf("Please choose from availability of theatre");
    b=1;
    break;
}
if(b==0){
printf("\n");
printf("Do you want to book ticket\n");
printf("Yes-1 or No-2\n");
int myn;
char name[50];
char gender[50];
char movie[100];
scanf("%d",&myn);
if(myn==1){
printf("\nEnter your Name:");
scanf("%s",name);
printf("\nEnter your Gender:");
scanf("%s",gender);
printf("\nSelect your movie:");
scanf("%s",movie);
int amtofmovie;
printf("\nEnter the amount of the movie:");
scanf("%d",&amtofmovie);
int countofseat;
printf("\nPlease enter how many seat do you want:");
scanf("%d",&countofseat);
printf("\nPlease choose the seat class\n");
printf("=>1st Class-->amount=+20,AC\n");printf("=>2nd Class-->amount=+10,Good view\n");printf("=>3rd Class-->No Extra Charges\n");
int class;
scanf("%d",&class);
if(class==1){
seatbookingA(name,gender,movie,amtofmovie,countofseat);}
else if(class==2){
seatbookingB(name,gender,movie,amtofmovie,countofseat);}
else{
seatbookingC(name,gender,movie,amtofmovie,countofseat);}
printf("\n");
printf("\n");
printf("If you want to order some snacks?\n");
printf("Yes-1 or No-2\n");
int Yn,Totalamt=0;
scanf("%d",&Yn);
if(Yn==1){
    printf("\tSnacks Menu:\n");
    printf("\n");
    printf("\t1. Popcorn - Rs.40\n");
    printf("\t2. Coffee - Rs.30\n");
    printf("\t3. Icecream - Rs.45\n");
    printf("\t4. Puffs - Rs.20\n");
int Snacks[4]={1,2,3,4};
int count;
printf("\nEnter the count of Snacks:");
scanf("%d",&count);
for(int i=0;i<count;i++){
      printf("\nEnter your Snacks Number: ");
        scanf("%d", &Snacks[i]);

         if(Snacks[i]==1){
            Totalamt+=40;
        }
        else if(Snacks[i]==2){
            Totalamt+=30;
        }
        else if(Snacks[i]==3){
            Totalamt+=45;
        }
        else if(Snacks[i]==4){
            Totalamt+=20;
        }
        else {
           printf("Opps..! sry we dont have that Snacks in our Menu\n");
        }
}
   printf("\n");
   printf("Total amount of the snacks==>%d\n",Totalamt);
   printf("\n");
   printf("\n");
   printf("\t***Thank you for your order. Enjoy the movie!***\n");
}
else{
    printf("\t***Enjoy the movie***\n");
}
}
else{
    printf("\t***Please come again if you want to book ticket***\n");
}
}}}


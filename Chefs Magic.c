#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<conio.h>

#include<math.h>

int main()

{

    system("COLOR  03");

    printf("\n \n \n \n \n \n \n \n \n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> \n");

    printf("\t\t\t\t\t\t\t\t\t\t <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> \n");

    printf("\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t  ***Welcome to Chef's Magic***\n");

    printf("\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> \n");

    printf("\t\t\t\t\t\t\t\t <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> <>_<> \n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t Ready to order?\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t  1.Order\n");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t  2.Help\n\n\n");

    int opt;

    scanf("%d",&opt);

    if(opt==1){

       user();

   }

    else if(opt==2){

        help();

    }

}

void help()

{

system("COLOR 10");

int opt;

printf("\n\t\t\t\t\t\t\t\t 1.Wanna Create a Chef's Magic Account?\n\n");

printf("\t\t\t\t\t\t\t\t 2.Call for More Help?\n\n");

printf("\t\t\t\t\t\t\t\t 3.Know More About Us\n\n");

scanf("%d",&opt);

if(opt==1){

    signin();

}

else if(opt==2){

    printf("\t\t\t\t\t\t\t\t Dial 22222\n\n");

}

else if(opt==3){

    system("COLOR 10");

    printf("\t\t\Are you Hungry?Through Chef's Magic you can Order delicious food and get amazing comfort food right at your door.\n\t\tWe provide the Fastest Delivery around the town.\n\t\t\So,pick your phone and order yummy food with CHEF'S MAGIC.\n\n");

}











}

void user()

{

    system("COLOR 7A");

    int opt;

    printf("\t\t\t\t\t\t\t\t<><><><><><><><><><><><><><><><><><>\n");

    printf("\n\t\t\t\t\t\t\t\t 1.Log in:\n\n");

    printf("\t\t\t\t\t\t\t\t New User?\n\n");

    printf("\t\t\t\t\t\t\t\t 2.Sign Up\n\n\n");

    scanf("%d",&opt);

    if(opt==1){

     login();

    }

 else if(opt==2){

   signin();

}

};

void login()

{

system("COLOR 03");

char username[20];

int password;

printf("\n\t\t\t\t\t\t\t\t Please Enter your Username (foodie)\n");

scanf("%s",&username);

printf("\n\t\t\t\t\t\t\t\t Please Enter your Password (12345)\n");

scanf("%d",&password);

    if(strcmp(username,"foodie")==0 && password==12345){

        printf("\n\t\t\t\t\t\t\t\t Let's Order Some Delicious Food for You!!! \n");

        printf("\t\t\t\t\t\t\t\t :D :D :D :D :D\n\n");

        order();

    }

    else{

        printf("\t\t\t\t\t\t\t\t :( :( :( :( :( :( :( \n");

        printf("\n\t\t\t\t\t\t\t\t Oops!You've entered the wrong password\n ");

        printf("\t\t\t\t\t\t\t\t Please try again\n ");

    }

};

void signin()

{

system("COLOR 03");

char name[20];

char address[30];

char username[20];

int mobile;

int password;

printf("\t\t\t\t\t\t\t\t Your Name? \n\n");

scanf ("%s",&name);

printf("\t\t\t\t\t\t\t\t Choose a Username(foodie)\n\n");

scanf("%s",&username);

printf("\t\t\t\t\t\t\t\t Choose a Password(12345)\n\n");

scanf("%d",&password);

printf("\t\t\t\t\t\t\t\t Please Enter your Mobile Number\n\n");

scanf("%d",&mobile);

printf("\t\t\t\t\t\t\t\t Please Enter your Address\n\n");

scanf("%s",&address);

if(strcmp(username,"foodie")==0 && password==12345){

        printf("\t\t\t\t\t\t\t\t ***************************** \t\t\t\t\t\t\t\t\n\n");

        printf("\t\t\t\t\t\t\t\t !! WELCOME TO CHEF'S MAGIC !! \t\t\t\t\t\t\t\t\n\n");

        printf("\t\t\t\t\t\t\t\t ***************************** \t\t\t\t\t\t\t\t\n\n");

        order();

}

else{

    printf("\n\n\t\t\t\t\t\t\t\t Try Again \t\t\t\t\t\t\t\t\n\n");

}

};

void order(){

system("COLOR 03");

printf("\n");

printf("\t\t\t\t\t\t\t\tFilter your Order\n\n");

category();

}

void category(){

int opt;

printf("\n");

printf("\t\t\t\t\t\t\t\t1.Traditional Food\n\n");

printf("\t\t\t\t\t\t\t\t2.Fast Food\n\n");

printf("\t\t\t\t\t\t\t\t3.Desserts\n\n");

scanf("%d",&opt);

if(opt==1){

  traditional();

}

else if(opt==2){

   fastfood();

}

else if(opt==3){

    dessert();

}

}

void traditional()

{

    struct Tf{

    char name[50];

    float price;

    struct Tf *next;

    };

typedef struct Tf tf;

{

tf *head;

int opt;

int q;

int total;

printf("\n\nItem\t\t\t\t\t\tPrice\n\n");

head=(tf*)malloc(sizeof(tf));

strcpy(head->name,"1.Chicken Biriyani");

head->price=150;

printf("%s\t\t\t\t%.2f BDT\n\n",head->name,head->price);

head->next=(tf*)malloc(sizeof(tf));

strcpy(head->next->name,"2.Mutton Biriyani");

head->next->price=200;

printf("%s\t\t\t\t%.2f BDT\n\n",head->next->name,head->next->price);

head->next->next=(tf*)malloc(sizeof(tf));

strcpy(head->next->next->name,"3.Beef Biriyani");

head->next->next->price=190;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->next->name,head->next->next->price);

head->next->next->next=(tf*)malloc(sizeof(tf));

strcpy(head->next->next->next->name,"4.Chicken Polao");

head->next->next->next->price=160;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->next->next->name,head->next->next->next->price);

head->next->next->next->next=(tf*)malloc(sizeof(tf));

strcpy(head->next->next->next->next->name,"5.Grilled Chicken");

head->next->next->next->next->price=400;

printf("%s\t\t\t\t%.2f BDT\n\n",head->next->next->next->next->name,head->next->next->next->next->price);

printf("\t\t\t\t\n\n Pick your items \n\n");

scanf("%d",&opt);

if(opt==1){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=150*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();



}

else if(opt==2){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=200*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==3){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=190*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

    }

    else if(opt==4){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=160*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==5){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=400*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

 }

}

}

void fastfood(){

    struct Ff{

    char name[50];

    float price;

    struct Ff *next;

    };

typedef struct Ff ff;

{

ff *head;

int opt;

int q;

int total;

printf("\n\nItem\t\t\t\t\t\tPrice\n\n");

head=(ff*)malloc(sizeof(ff));

strcpy(head->name,"1.Chicken Fry");

head->price=80;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->name,head->price);

head->next=(ff*)malloc(sizeof(ff));

strcpy(head->next->name,"2.Pizza");

head->next->price=200;

printf("%s\t\t\t\t\t\t%.2f BDT\n\n",head->next->name,head->next->price);

head->next->next=(ff*)malloc(sizeof(ff));

strcpy(head->next->next->name,"3.Chicken Burger");

head->next->next->price=150;

printf("%s\t\t\t\t%.2f BDT\n\n",head->next->next->name,head->next->next->price);

head->next->next->next=(ff*)malloc(sizeof(ff));

strcpy(head->next->next->next->name,"4.American Fries");

head->next->next->next->price=100;

printf("%s\t\t\t\t%.2f BDT\n\n",head->next->next->next->name,head->next->next->next->price);

head->next->next->next->next=(ff*)malloc(sizeof(ff));

strcpy(head->next->next->next->next->name,"5.Nachos");

head->next->next->next->next->price=120;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->next->next->next->name,head->next->next->next->next->price);

printf("\t\t\t\t\n\n Pick your items \n\n");

scanf("%d",&opt);

if(opt==1){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=80*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();



}

else if(opt==2){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=200*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==3){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=150*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

    }

    else if(opt==4){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=100*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==5){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=120*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

}



}

void dessert(){

    struct Df{

    char name[50];

    float price;

    struct Df *next;

    };

typedef struct Df df;

{

df *head;

int opt;

int q;

int total;

printf("\n\nItem\t\t\t\t\t\tPrice\n\n");

head=(df*)malloc(sizeof(df));

strcpy(head->name,"1.Donut");

head->price=80;

printf("%s\t\t\t\t\t\t%.2f BDT\n\n",head->name,head->price);

head->next=(df*)malloc(sizeof(df));

strcpy(head->next->name,"2.Cheese Cake");

head->next->price=200;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->name,head->next->price);

head->next->next=(df*)malloc(sizeof(df));

strcpy(head->next->next->name,"3.Chocolate Cake");

head->next->next->price=150;

printf("%s\t\t\t\t%.2f BDT\n\n",head->next->next->name,head->next->next->price);

head->next->next->next=(df*)malloc(sizeof(df));

strcpy(head->next->next->next->name,"4.Roshomalai");

head->next->next->next->price=350;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->next->next->name,head->next->next->next->price);

head->next->next->next->next=(df*)malloc(sizeof(df));

strcpy(head->next->next->next->next->name,"5.Mishti Doi");

head->next->next->next->next->price=180;

printf("%s\t\t\t\t\t%.2f BDT\n\n",head->next->next->next->next->name,head->next->next->next->next->price);

printf("\t\t\t\t\n\n Pick your items \n\n");

scanf("%d",&opt);

if(opt==1){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=80*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();



}

else if(opt==2){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=200*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==3){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=150*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

    }

    else if(opt==4){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=350*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

else if(opt==5){

    printf("\t\t\t\t Quantity\n\n");

    scanf("%d",&q);

    total=180*q;

    printf("\t\t\t\tTotal Price %d BDT\n\n",total);

    placeorder();

}

}



}

void placeorder(){

    system("COLOR B0");



char address[150];

int phoneNo;

printf("\t\t\t\t\n\n Please Enter Your Address\n\n");

scanf("%s",&address);

printf("\t\t\t\t Please Enter Your Phone Number\n\n");

scanf("%d",&phoneNo);

int opt;

printf("\t\t\t\t Payment Method\n\n");

printf("\t\t\t\t 1.Cash On Delivery\n\n");

printf("\t\t\t\t 2.Bkash\n\n");

printf("\t\t\t\t 3.Rocket\n\n");



scanf("%d",&opt);

if(opt==1){

    printf("\t\t\t\t****Congratulations!!!***Your Order will arrive after 30-40 minutes\t\t\t\t\n\n");

    printf("\t\t\t\t Do you want to Order More?\t\t\t\t\n\n");

    int x;

    printf("\t\t\t\t 1.YES\n\n");

    printf("\t\t\t\t 2.NO\n\n");

    scanf("%d",&x);

    if(x==1){

    order();

    }

    else{

        team();

    }

    }

else if(opt==2){

    int bkashNo;

    printf("\t\t\t\t Please Enter your Bkash Number\n\n");

    scanf("%d",&bkashNo);

    int bkashpin;

    printf("\t\t\t\t Please Enter your Bkash Pin\n\n");

    scanf("%d",&bkashpin);

    printf("\t\t\t\t****Congratulations!!!***Your Order will arrive after 30-40 minutes\t\t\t\t\n\n");



    printf("\t\t\t\t Do you want to Order More?\t\t\t\t\n\n");

    int x;

    printf("\t\t\t\t 1.YES\n\n");

    printf("\t\t\t\t 2.NO\n\n");

    scanf("%d",&x);

    if(x==1){

    order();

    }

    else{

        team();

    }



}

else if(opt==3){

  int rocketNo;

    printf("\t\t\t\t Please Enter your Rocket Number\n\n");

    scanf("%d",&rocketNo);

    int rocketpin;

    printf("\t\t\t\t Please Enter your Rocket Pin\n\n");

    scanf("%d",&rocketpin);

    printf("\t\t\t\t****Congratulations!!!***Your Order will arrive after 30-40 minutes\t\t\t\t\n\n");

    printf("\t\t\t\t Do you want to Order More?\t\t\t\t\n\n");

    int x;

    printf("\t\t\t\t 1.YES\n\n");

    printf("\t\t\t\t 2.NO\n\n");

    scanf("%d",&x);

    if(x==1){

    order();

    }

    else{

        team();

    }



}



}

void team(){

     system("COLOR B0");

printf("\n\n\t\t\t THANK YOU! for staying with us. Chef's Magic is Happy to be by your side.\t\t\t\t\t\n\n");

printf("\t\t\t Brought To You BY\n\n");

printf("\t\t\t ***Team PHOENIX***\n\n");

printf("\t\t\t 1.Nusrat Jahan(192-15-2902)\n");

printf("\t\t\t 2.Sajia Afrin(192-15-2907)\n");

printf("\t\t\t 3.Liza Aktar(192-15-2903)\n");

printf("\t\t\t 4.Abu Salkin(192-15-2892)\n");

printf("\t\t\t 5.Md. Sujon Islam(192-15-2813)\n");

}

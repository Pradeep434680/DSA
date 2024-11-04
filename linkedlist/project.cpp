#include<iostream>
#include<string>

int id=1;
int total_items_in_card = 1;
int user_amount =0;
using namespace std;
struct Items
{
    string item_name;
    int price;
    int item_number;
    Items  *next_item;
};
struct item_pointer
{
    Items * first;
    Items * rear;
};

struct Product
{
    // int customer_id;
    string customer_item;
    int total_itemsin_card;
    int total_amount;
    Product * next_product;
};
struct user_info
{
    string email;
    string password;
    int customer_id;
    user_info * next_user;
    Product * product_link;

};
struct user_pointer
{
    user_info * begin;
    user_info * end;
};

struct product_pointer
{
    Product * front;
    Product * last;
};

void add_items(struct item_pointer *p,string item_name,int price,int item_number)
{
    if(p->first == NULL)
    {
        // it is first item
        Items *temp;
        temp = new Items;
        p->first = temp;
        p->rear = temp;
        temp->item_number = item_number;
        
        temp->item_name = item_name;
        temp->price = price;
        temp->next_item = NULL;

    }
    else
    {
        Items *temp;
        temp = new Items;
        p->rear->next_item = temp;
         temp->item_number = item_number;
        temp->item_name = item_name;
        temp->price = price;
        temp->next_item = NULL;
        p->rear = temp;

    }
}

void display_items(struct item_pointer *p)
{
    Items *temp  = p->first;
    cout<<"total items are-:\n";
    cout<<"    item name    "<<"  price    "<<" click to buy  ";
    cout<<endl;

    while(temp)
    {
        cout<<"   "<<temp->item_name<<"       "<<temp->price<<" "<<"       "<<temp->item_number<<"   "<<endl;
        temp = temp->next_item;
    }
};

void sign_up(struct user_pointer *p,string username,string password)
{
    if(p->begin == NULL)
    {
        user_info * temp = new user_info;
        temp->customer_id = id;
        temp->email = username;
        temp->password = password;
        temp->next_user = NULL;
        p->begin = temp;
        p->end = temp;
        temp->product_link = NULL;
        id++;
    }
    else
    {
        user_info * temp = new user_info;
        temp->customer_id = id;
        temp->email = username;
        temp->password = password;
        p->end->next_user = temp;
        temp->product_link = NULL;
        p->end = temp;
        temp->next_user = NULL;
        id++;

    }

}



void display_user(struct user_pointer p)
{
    user_info * temp = p.begin;

    while(temp)
    {
        cout<<"Username is :"<<temp->email<<" : user id is :"<<temp->customer_id<<endl;
        temp = temp->next_user;
    }
}
bool user_validation(user_info *temp,string name,string password)
{
    string pass = password;
    string username = name;
    int num =3;
    while(num--)
    {
        if(temp->email == username && temp->password == pass)
        {
            cout<<"User login successfully\n";
            return 1;
            
        }
        else if(temp->email == username && temp->password != pass)
        {
            cout<<"your password is wrong ! please try again\n";
            cout<<"enter your password again\n";
            cin>>pass;
            continue;
        }
        else if(temp->email != username && temp->password == pass)
        {
            cout<<"your username is wrong ! please try again\n";
            cout<<"enter your username again:\n";
            cin>>username;
            continue;
        }
        else
        {
            cout<<"wrong information ! please try again\n";
            cout<<"enter your email:";
            cin>>username;
            cout<<endl;
            cout<<"enter your password:";
            cin>>pass;
            continue;
            
        }
        return 0;

    }
}

void display_user_product(struct user_pointer *up)
{
    int id;
    cout<<"enter the customer id :";
    cin>>id;
    int flag=0;
    // search id in the user linked list
    user_info * temp;
    temp = up->begin;
    while(temp)
    {
        if(temp->customer_id == id)
        {
            flag =1;
            break;
        }
        else{
            temp = temp->next_user;
        }
    }
    if(flag ==0)
    {
        cout<<"id number "<<id<<" is not exist \n";
    }
    else
    {
        // i have reached that perticular user 
        Product *temp1 = temp->product_link;
      
        //  cout<<"product name:"<<temp1->customer_item<<" amount:"<<temp1->total_amount<<endl;
        while(temp1 != NULL)
        {
            cout<<"product name:"<<temp1->customer_item<<" amount:"<<temp1->total_amount<<endl;
            temp1=temp1->next_product;
            user_amount+= temp1->total_amount;
        }
        // now pointer = user->linked address
        //print ths item list
    }
};
void link_product( Items *ip,user_info *up ,struct product_pointer * pp)
{
    Product * temp = up->product_link;
    if(temp == NULL)
    {
        temp = new Product;
        temp->customer_item= ip->item_name;
        temp->total_amount = ip->price;
        temp->next_product=NULL;
        pp->last = temp;
        // pp->front = temp;
        temp->total_itemsin_card =total_items_in_card;
        total_items_in_card++;
        up->product_link = temp;
    }
    else
    {
        temp = new Product;
        temp->customer_item= ip->item_name;
        temp->total_amount = ip->price;
        temp->next_product=NULL;
        total_items_in_card++;
        pp->last->next_product = temp;
        pp->last=temp;

    }
}
void buy_items(struct item_pointer *ip,user_info * up,struct product_pointer *pp)
{
    int item_num;
    cout<<"enter the item_num of product that you want to buy\n";
    cout<<"press 0 for exit\n";
    cin>>item_num;
    
    while(item_num)
    {
        cout<<"enter the item_num of product that you want to buy\n";
        cin>>item_num;
        int flag =0;
        if(item_num == 0)
        break;
        Items *temp = ip->first;
        while(temp)
        {
            if(temp->item_number == item_num)
            {
                flag =1;
                break;
            }
            else
            {
                temp = temp->next_item;
            }
        }
        link_product(temp,up,pp);

    }

};
void login(struct user_pointer *p,int user_id,struct item_pointer *ip,struct product_pointer *pp)
{
    int x=0;
    user_info * temp = p->begin;
    while(temp)
    {
        if(temp->customer_id == user_id)
        {
            x=1;
            break;
        }
        else
        {
            temp=temp->next_user;
        }
    }
    if(x==0)
    {
        cout<<"user doesn't exist\n";
        return;
    }
    string name,pass;
    cout<<"enter your email:";
    cin>>name;
    cout<<endl;
    cout<<"enter your password:";
    cin>>pass;

    bool token = user_validation(temp,name,pass);
    
    if(token)
    {
        cout<<"*****##########**********\n";
        display_items(ip);
        buy_items(ip,temp,pp);
    }
        

}
   
   


// class Items
// {
//     string item_name;
//     int price;
//     Items * next_item;
//     public:
//     Items(struct item_pointer *p,string item_name,int price)
//     {
//         this->item_name = item_name;
//         this->price = price;
//         next_item = NULL;
//         p->first = NULL;
//         p->rear = NULL;
//     }
//     void add_items(struct item_pointer *p,string item_name,int price)
//     {
//         Items * new_item = new Items(p,"laptop",60000);
//     }
    // };

int main()
{
    item_pointer p;
    p.first = NULL;
    p.rear = NULL;
    product_pointer P1;
    P1.front = NULL;
    P1.last = NULL;
    user_pointer U1;
    U1.begin = NULL;
    U1.end = NULL;
    
    sign_up(&U1,"pradeep@gmail.com","pass");
    // sign_up(&U1,"varsha@gmail.com","123");
    sign_up(&U1,"rahul@gmail.com","rahul");
    sign_up(&U1,"raj@gmail.com","rajpoot");
    sign_up(&U1,"kumar@gmail.com","kumar");
    // display_user(U1);
    cout<<endl;
    
    

    Items I1;
    add_items(&p,"mobile",12000,1);
    add_items(&p,"laptop",30000,2);
    add_items(&p," watch ",1200,3);
    add_items(&p," bottle ",320,4);
    add_items(&p,"earbuds",1000,5);
    add_items(&p,"speaker",1800,6);
    // display_items(&p);
    login(&U1,1,&p,&P1);
    // login(&U1,2,&p,&P1);
    // login(&U1,3,&p,&P1);
    // login(&U1,4,&p,&P1);

    display_user_product(&U1);
    cout<<"total items in the card:"<<total_items_in_card<<endl;
    // cout<<"total amount:"<<user_amount<<endl;
    // display_user_product(&U1);
    // display_user_product(&U1);
    // display_user_product(&U1);

    // buy_items_first_time(&C1,&p,1,2);
    // buy_items_first_time(&C1,&p,1,3);
    // buy_items_first_time(&C1,&p,6,3);
    // display_customer(C1);

}
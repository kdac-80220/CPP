#include<iostream>
using namespace std;

class matrixAddition{
    int **mat1;
    int **mat2;
    int **result;
    int r,c;
    public:
    matrixAddition(int row,int col)
    {
        this->mat1=new int *[row];
        for(int i=0;i<row;i++)
        {
            this->mat1[i]=new int[col];
        }
        r=row;
        c=col;

        


    }

    void acceptmat()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"Enter value for Mat1 "<<i<<" "<<j<<endl;
                cin>>this->mat1[i][j];
            }
        }
    }

   
    
    /*void add()
    {
        addition(*mat1,*mat2);
    }*/
    void addition(matrixAddition *mat1,matrixAddition *mat2)
    {

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                this->result[i][j]=this->mat1[i][j]+this->mat2[i][j];
            }
        }
        cout<<"Addition"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->result[i][j]<<" ";
            }
        }
        
    }
    
    void printMat1()
    {
        cout<<"matrix 1"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->mat1[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    ~matrixAddition()
    {
        delete[] mat1;
        delete mat1;
        mat1=NULL;
    }
   
};

 
int main()
{
    matrixAddition m(3,2);
    matrixAddition n(3,2);
    
    m.acceptmat();
    n.acceptmat();
    m.printMat1();
    n.printMat1();
    matrixAddition r(3,2);
    r.addition(&m,&n);
    //matrixAddition m2(3,2);
    //m2.addition(m1,n1);
    //m.add();
}
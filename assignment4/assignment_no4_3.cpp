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

        this->mat2=new int *[row];
        for(int i=0;i<row;i++)
        {
            this->mat2[i]=new int[col];
        }

        this->result=new int *[row];
        for(int i=0;i<row;i++)
        {
            this->result[i]=new int[col];
        }


    }

    void acceptmat1()
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

    void acceptmat2()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"Enter value for Mat2 "<<i<<" "<<j<<endl;
                cin>>this->mat2[i][j];
            }
        }
    };
    
    void add()
    {
        addition(*mat1,*mat2);
    }
    void addition(int *mat1,int *mat2)
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
            cout<<endl;
        }
        
    }
    

    /*void add()
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
            cout<<endl;
        }
    }*/
    void substract()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                this->result[i][j]=this->mat1[i][j]-this->mat2[i][j];
            }
        }
        cout<<"Substraction"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->result[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void multiplication()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                this->result[i][j]=0;
                for(int k=0;k<r;k++)
                {
                    this->result[i][j]=this->result[i][j]+this->mat1[i][k]*this->mat2[k][j];
                }
                
            }
        }
        cout<<"Multiplication"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->result[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void transpose()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                this->result[i][j]=this->mat1[j][i];
            }
        }
        cout<<"Transpose"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->result[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                this->result[i][j]=this->mat2[j][i];
            }
        }
        cout<<"Transpose"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->result[i][j]<<" ";
            }
            cout<<endl;
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

    void printMat2()
    {
        cout<<"matrix 2"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<this->mat2[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    ~matrixAddition()
    {
        for(int i=0;i<r;i++)
        {
            delete[] mat1[i];
            delete[] mat2[i];
            delete[] result[i];
        }
        delete[] *mat1;
        delete[] *mat2;
        delete[] *result;
        delete[] mat1;
        delete[] mat2;
        delete[] result;
        
        
    }
};

 
int main()
{
    matrixAddition m(2,2);
    //matrixAddition n(3,2);
    
    m.acceptmat1();
    m.acceptmat2();
    m.printMat1();
    m.printMat2();
    m.add();
    m.substract();
    m.multiplication();
    m.transpose();
}
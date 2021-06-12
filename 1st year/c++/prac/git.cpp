#include <iostream>

using namespace std;

int i,j;

/** Triangle V1**/
        int RightTrianle(int number){
            for(i=0;i<number;i++){
             for( j=i;j<number;j++)   {
                cout<<"*";
             }
             cout<<endl;
            }
            return 0;
        }


        /** Triangle V2 */
        int TrianglefourPattern(int number){
            //first Pattern
            for (i=number;i>0;i--){
                for (j=i;j<number;j++){
                    cout<<"*";
                }
                cout<<endl;
            }

            //second Pattern
            for (i=0;i<number;i++){
                for (j=number;i<j;j--){
                    cout<<"*";
                }
                cout<<endl;
            }

            //third Pattern
            for (i=0;i<number;i++){
                for (j=0;j<i;j++){
                    cout<<" ";
                }
                for (j=0;j<number-i;j++){
                    cout<<"*";
                }
                cout<<endl;
            }

            //fourth Pattern
            for(i=0;i<number;i++){
                for(j=0;j<number-i;j++){
                    cout<<" ";
                }
                for (j=0;j<i+1;j++){
                    cout<<"*";
                }
                cout<<endl;
            }

            return 0;
        }


                /** Diamond Pattern **/
                void Diamond (int number){

                    for ( i=0;i<number/2+1;i++){
                        //Trangle Top
                        for(j=0;j<(number/2-i);j++) {cout<<" ";}
                        for(j=0;j<2*i+1;j++) {cout<<"*";}
                        cout<<endl;
                    }


                    for ( i=number/2-1;i>=0;i--){
                        //Trangle Top
                        for(j=0;j<(number/2-i);j++) {cout<<" ";}
                        for(j=0;j<2*i+1;j++) {cout<<"*";}
                        cout<<endl;

                        //Triangle down

                    }
                }

int main()
{
 cout<<"Right Triangle"<<endl;
   RightTrianle(4);
   cout<<endl<<endl;
   cout<<"Triangle 4 Patterns"<<endl;
   TrianglefourPattern(6);
   cout<<endl<<endl;
   cout<<"Diamond Pattern"<<endl;
   Diamond(5);
   
    return 0;
}

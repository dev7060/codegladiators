/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int is_prime(long num){
    if(num>=10){
        /*if(num%10==0||num%10==2||num%10==4||num%10==6||num%10==5||num%10==8){
            return 1;
        }*/
        switch(num%10){
            case 0: return 1;
            case 2: return 1;
            case 4: return 1;
            case 6: return 1;
            case 5: return 1;
            case 8: return 1;
        }
    }
    int flag=0; //1 for non prime, 2 for prime
     for(long i=2; i<=(num/2); i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 1; //ie not prime
    }else if(flag == 0){
        return 5; //prime
    }
    
}
int no_prime_check(long l, long r){
    //long long int current = l;
    int flag=0; //1-list has atleast one prime no, 2-all list is non prime
    int count=0;
    while(l<=r){
        if(is_prime(l)==5){
            flag=1;
            count++;
        }
        l++;
    }
   // cout<<" count:"<<count<<" ";
    if(flag==1){
        //list has atleast 1 prime
        if(count==1){
            return 3;
        }else{
            return 1;
        }
        
    }else if(flag==0){
        //all list non prime
        return 5;
    }
    //return 5;
   
}

int main()
{
	long n;
	long l, r;
	cin>>n;
	while(n--){
	    cin>>l>>r;
	    /*
	    if(l==r){
	        cout<<"0\n";
	    }else
	    */
	    if(no_prime_check(l, r)==5){
	        cout<<"-1\n";
	    }else if(no_prime_check(l, r)==3){
	        cout<<"0\n";
	    }else{
	        long new_l, new_r, temp1;
	        for(temp1=l; temp1<=r; temp1++){
	            if(is_prime(temp1)==5){
	                new_l=temp1;
	                break;
	            }
	        }
	        for(temp1=r; temp1>=l; temp1--){
	            if(is_prime(temp1)==5){
	                new_r=temp1;
	                break;
	            }
	        }
	        //cout<< new_l <<" "<<new_r<<" ";
	        
	        if(new_r==new_l){
	            cout<<new_l<<"\n";
	        }else{
	            cout<<new_r-new_l<<"\n";
	        }
	    }
	}
}

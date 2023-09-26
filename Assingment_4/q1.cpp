#include<iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int sec;
public:
    Time() {
		  hr = 0;
		  min = 0;
		  sec = 0;
	  }
	Time(int hr, int min, int sec) {
		this->hr = hr;
		this->min = min;
		this->sec = sec;
	}
	int getHr() {
		return this->hr;
	}
	int getMin() {
		return this->min;
	}
	int getSec() {
		return this->sec;
	}
	void setHr(int hr) {
		this->hr = hr;
	}
	void setMin(int min) {
		this->min = min;
	}
	void setSec(int sec) {
		this->sec = sec;
	}
	void printTime() {
		cout << "The Time is : " << hr << ":" << min << ":" << sec << endl;
	}
};

int main(){

    Time **arr = new Time*[2];
    int hr,min,sec;

    for(int i = 0 ; i < 2 ; i++){
        cout<<"Enter the hr: ";
        cin>>hr;
        cout<<"Enter the min: ";
        cin>>min;
        cout<<"Enter the sec: ";
        cin>>sec;
        arr[i] = new Time(hr,min,sec);
        arr[i]->printTime();
    }
    
    int ans;
    ans  = arr[0]->getHr();
    cout<<"The hr is: "<<ans<<endl;
    ans  = arr[0]->getMin();
    cout<<"The Min is: "<<ans<<endl;
    ans  = arr[0]->getSec();
    cout<<"The Sec is: "<<ans<<endl;

    for(int i = 0 ; i < 2 ; i++)
        delete arr[i];
    
    delete[] arr;
    return 0;
}
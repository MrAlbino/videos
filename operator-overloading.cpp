#include<iostream>

using namespace std;

class Kompleks{
	
	private:
		int sanal;
		int reel;
	public:
		
		Kompleks(int r=0,int s=0){
			sanal=s;
			reel=r;
		}
		
		int getReel(){
			return reel;
		}
		
		int getSanal(){
			return sanal;
		}
		
	    void setReel(int r)
    	{
        	reel = r;
    	}

	    void setSanal(int s)
	    {
	        sanal = s;
	    }


	    /*void print()
	    {
	        if(sanal > 0)
	            cout << reel << " + " << sanal << "i" << endl;
	        else if(sanal < 0)
	            cout << reel << " - " << -sanal << "i" << endl;
	        else
	            cout << reel << endl;
	    }*/
			
};

Kompleks operator+(Kompleks k1,Kompleks k2){
	
	Kompleks toplam;
	toplam.setReel(k1.getReel()+k2.getReel());
	toplam.setSanal(k1.getSanal()+k2.getSanal());
	return toplam;
}

ostream& operator<<(ostream& out,Kompleks kar){
	
	int sanal=kar.getSanal();
	int reel=kar.getReel();
	
	if(sanal > 0)
	    out << reel << " + " << sanal << "i" << endl;
	else if(sanal < 0)
	    out << reel << " - " << -sanal << "i" << endl;
	else
	    out << reel << endl;
	    
	return out;
}

int main(){
	
	Kompleks kar1(5,-3);
	Kompleks kar2(-2,1);
	
	Kompleks kar3=kar1+kar2;
	
	cout<<kar3;
	
	cout<<"Operator Overloading"<<endl;
	
	return 0;
}

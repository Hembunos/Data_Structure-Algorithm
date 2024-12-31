class Solution{

  public:
  int find(int A[],int X){
  
        if (A[X] == X) 
            return X;
        
        return A[X] = find(A, A[X]);
    
    }

    void unionSet(int A[],int X,int Z){
	    int x_parent = find(A,X); 
	    int z_parent = find(A,Z);
	    if (x_parent != z_parent){ 
	        A[x_parent] = z_parent;
	        
	    }
    }
};
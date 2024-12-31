class solution{
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
    

	int detectCycle(int V, vector<int>adj[]){
	    
	    int A[V];
	    
	    for(int i = 0; i < V; i++){
	        A[i] = i;
	    }
	    
	    for(int u = 0; u < V; u++){
	        for(auto& v: adj[u]){
	            if(u < v){
	                int u_parent = find(A,u);
	                int v_parent = find(A,v);
	                
	                if (u_parent == v_parent) {
                        return 1;
                    } else {
                        unionSet(A, u, v);
                    }
	            }
	        }
	    }
	    
	    return 0;
	}
};

            if(arr[k][l]==arr[i][j]&&k!=i||l!=j){
                int tem=arr[i][j];
                arr[i][j]=arr[k][l];
                arr[k][l]=tem;
            }
        }
       }
       

    printf("%d ",arr[i][j]);
    
    }
   
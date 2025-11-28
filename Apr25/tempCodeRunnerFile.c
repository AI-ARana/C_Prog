for(j=i+1;j<size;)
        {
            if(arr[i]==arr[j])
            {
                // Shift elements to the left to delete duplicate
                for(k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--; // Decrease size of array
            }
            else
            {
                j++; // Only increment j if no deletion occurs
            }
        }
    }
#include<iostream>
using namespace std;
int main()
{
	int n=nums1.size(),m=nums2.size(),a=n+m,i=0,j=0,k=0,l=0,h=a-1;
            while(i<n && j<m)
            {
                if(nums1[i]<nums2[j])
                {
                    v[k]=nums1[i];
                    i++;
                }
                else if(nums2[j]<nums1[i])
                {
                    v[k]=nums2[j];
                    j++;
                }
                k++;
            }
        if(i==n)
        {
            while(j<m)
            {
                v[k]=nums2[j];
                j++;         
                k++;
            }
        }
        else if(j==m)
        {
            while(i<n)
            {
                v[k]=nums1[i];
                i++;
                k++;
            }
        }
}

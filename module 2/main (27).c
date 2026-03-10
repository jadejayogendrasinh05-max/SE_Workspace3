#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
printf("\n enter your number");
scanf("%d",&num);

if(num>0)
{
    printf("number is positive");
    
}
else
{
    printf("number is negative");
}
    
    
    
    
    
    return 0;
}using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public float speed = 5f;

    void Update()
    {
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 move = transform.right * x + transform.forward * z;
        transform.position += move * speed * Time.deltaTime;
    }
}
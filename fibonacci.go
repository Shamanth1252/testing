package main
import  "fmt"


func main() {
 var prev,curr,sum int
 prev=0
 curr=1
 sum=0
 for prev+curr<40{
     next:=prev+curr
     if next%2==0{
         sum+=next
     }
     prev=curr
     curr=next
 }
 fmt.Printf("the sum of even valued terms is %d",sum)
}
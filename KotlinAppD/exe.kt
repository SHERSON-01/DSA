fun main(){
    println("enter numbers")
    val digits1 = readln().toInt()
    val digits2 = readln().toInt()
    val result = divide(digits1,digits2)
    println(result)
}
fun divide(num1:Int, num2:Int):Double{
    val sum = num1/num2.toDouble()
    return sum
}
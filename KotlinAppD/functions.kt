fun main(){
    var Myresult = add(5,2)
    println(Myresult)
}
fun add(num1:Int, num2:Int): Int{
    val result = num1+num2
    return result
}
fun serve(){
    println("Who is coffee for?")
    val name=readln()
    println("Sugar")
    val sugarCount = readln()
    val sugarCountInt = sugarCount.toInt()
    coffee(sugarCountInt,name)
}
fun coffee(sugarCount : Int, name:String){
    if(sugarCount==1){
        println("Coffee with $sugarCount spoons of sugar for $name")
    }
    else{
        println("Coffee with $sugarCount spoons of sugar for $name")
    }
}
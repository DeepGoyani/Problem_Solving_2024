7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
"red" → "Stop"
"yellow" → "Slow down"
"green" → "Go"


var light_color="bed" 

if(light_color=="red"){
  console.log("Stop")
}
 else if(light_color=="yellow"){
  console.log("Slow down")
} else if(light_color=="green"){
  console.log("Go")
}else{
  console.log(`${light_color} color is not match with traffic light color`)
}
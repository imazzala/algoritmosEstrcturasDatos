import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, lenght):
    if lenght > 0:
        myTurtle.forward(lenght)
        myTurtle.left(90)
        draw(myTurtle, lenght - 10)


draw(myTurtle, 100)
myWin.exitonclick()
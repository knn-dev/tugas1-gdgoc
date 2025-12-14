import turtle
import random
import time

# Setup screen
screen = turtle.Screen()
screen.bgcolor("skyblue")  # Latar belakang biru langit
screen.title("Bunga dengan Hujan Titik Hijau")
screen.tracer(0)  # Matikan tracer untuk animasi smooth

# Fungsi untuk menggambar bunga sederhana
def draw_flower():
    flower = turtle.Turtle()
    flower.speed(0)
    flower.hideturtle()
    
    # Batang bunga
    flower.penup()
    flower.goto(0, -200)
    flower.pendown()
    flower.pensize(5)
    flower.color("green")
    flower.setheading(90)
    flower.forward(150)
    
    # Kelopak bunga
    flower.penup()
    flower.goto(0, -50)
    flower.pendown()
    flower.color("red")
    for _ in range(6):
        flower.circle(50)
        flower.right(60)
    
    # Pusat bunga
    flower.penup()
    flower.goto(0, -50)
    flower.pendown()
    flower.color("yellow")
    flower.dot(30)

# Fungsi untuk membuat titik hujan hijau
def create_raindrop():
    raindrop = turtle.Turtle()
    raindrop.shape("circle")
    raindrop.color("green")
    raindrop.shapesize(0.5, 0.5)
    raindrop.penup()
    raindrop.speed(0)
    raindrop.hideturtle()
    return raindrop

# List untuk menyimpan titik hujan
raindrops = []

# Gambar bunga statis
draw_flower()

# Loop utama untuk animasi hujan
while True:
    # Tambahkan titik hujan baru secara acak
    if random.randint(1, 10) == 1:  # Probabilitas 10% setiap frame
        raindrop = create_raindrop()
        raindrop.goto(random.randint(-400, 400), 300)  # Posisi awal di atas layar
        raindrops.append(raindrop)
    
    # Update posisi titik hujan
    for raindrop in raindrops[:]:
        raindrop.sety(raindrop.ycor() - 5)  # Turun ke bawah
        if raindrop.ycor() < -300:  # Jika keluar layar, hapus
            raindrop.clear()
            raindrops.remove(raindrop)
    
    screen.update()
    time.sleep(0.05)  # Delay untuk kontrol kecepatan animasi

# Tutup window saat klik
screen.exitonclick()

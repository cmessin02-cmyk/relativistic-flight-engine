#  Relativistic Time Dilation & Rocket Flight Engine

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Physics](https://img.shields.io/badge/Physics-Einstein%20Special%20Relativity-blueviolet?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

A computational engine built in C to simulate interstellar starship travel according to **Einstein's Theory of Special Relativity**. 

It calculates Lorentz factors, time dilation between Earth and the crew, length contraction, and the extreme kinetic energy required to accelerate mass near the speed of light.

---

## 📌 Features

- **Lorentz Factor ($\gamma$) Computation:** Calculates space-time distortions as ship velocity approaches $c$.
- **Preset Cosmic Targets:** Built-in distance coordinates for destinations like Alpha Centauri, Sirius, Sagittarius A*, and the Andromeda Galaxy.
- **Time Dilation Simulation:** Compares elapsed coordinate time (Earth frame) against proper time (astronaut frame).
- **Relativistic Length Contraction:** Measures the apparent distance shortcut experienced by the spacecraft.
- **Energy Requirements:** Computes precise relativistic kinetic energy ($E_k = (\gamma - 1)mc^2$) in Joules.

---

## 🧮 Mathematical Model

The core physics calculations rely on standard relativistic mechanics:

1. **Lorentz Factor:**
   $$\gamma = \frac{1}{\sqrt{1 - \frac{v^2}{c^2}}}$$

2. **Time Dilation:**
   $$\Delta t' = \frac{\Delta t}{\gamma}$$

3. **Relativistic Kinetic Energy:**
   $$E_k = (\gamma - 1) m c^2$$

---

## 🛠️ How to Compile & Run

### Prerequisites
Make sure you have GCC installed (via MSYS2 or MinGW).

### Execution

```bash
# Compile the C program
gcc main.c -o flight_engine -lm

# Run the executable
./flight_engine

---

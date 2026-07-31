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

## 📊 Benchmark Simulations (Alpha Centauri — 4.37 Light-Years)

*Theoretical flight parameters for a **1,000 Metric Ton** starship traveling to Alpha Centauri at varying fractions of light speed ($c$):*

| Speed ($\beta$) | Lorentz Factor ($\gamma$) | Earth Frame Time | Crew Proper Time | Required Kinetic Energy ($E_k$) |
| :---: | :---: | :---: | :---: | :---: |
| **0.50 c** | $1.1547$ | 8.74 Years | 7.57 Years | $1.391 \times 10^{22} \text{ Joules}$ |
| **0.90 c** | $2.2942$ | 4.86 Years | 2.12 Years | $1.163 \times 10^{23} \text{ Joules}$ |
| **0.99 c** | $7.0888$ | 4.41 Years | 0.62 Years | $5.472 \times 10^{23} \text{ Joules}$ |
| **0.9999 c** | $70.7124$ | 4.37 Years | 0.06 Years (~22 Days!) | $6.265 \times 10^{24} \text{ Joules}$ |

---

## 🔬 Physics & Theoretical Context

In classical Newtonian mechanics, kinetic energy grows quadratically ($E = \frac{1}{2}mv^2$) and time flows uniformly everywhere in the universe. Special Relativity demonstrates that space and time are unified into a 4-dimensional spacetime continuum.

As a starship's velocity approaches $c$:
* **Massive Energy Wall:** The energy required to accelerate increases non-linearly. Reaching $c$ would demand infinite energy, proving that no object with rest mass can achieve or exceed light speed.
* **Proper Time Asymmetry:** While travelers perceive their clock running normally, observers on Earth measure the crew's clock running dramatically slower due to time dilation.

#include <stdio.h>
#include <math.h>

// Physical Constants
#define SPEED_OF_LIGHT 299792458.0 // in meters per second (m/s)
#define SECONDS_IN_YEAR 31557600.0  // 365.25 days in seconds
#define LY_TO_METERS 9.4607e15     // 1 Light-Year in meters

// Function to calculate the Lorentz Factor (Gamma)
double calculate_gamma(double beta) {
    return 1.0 / sqrt(1.0 - (beta * beta));
}

// Function to display destination presets
void print_destinations() {
    printf("\n--- PRESET DESTINATIONS ---\n");
    printf("1. Alpha Centauri (~4.37 Light-Years)\n");
    printf("2. Sirius (~8.6 Light-Years)\n");
    printf("3. Galactic Center / Black Hole Sagittarius A* (~26,600 Light-Years)\n");
    printf("4. Andromeda Galaxy (~2,537,000 Light-Years)\n");
    printf("5. Custom Distance\n");
}

int main() {
    int choice;
    double distance_ly = 0.0;
    double beta = 0.0;       // Velocity as fraction of c (e.g. 0.95)
    double ship_mass_kg = 0.0;

    
    printf("   RELATIVISTIC TIME DILATION & FLIGHT ENGINE    \n");
    printf("          (Einstein Special Relativity)          \n");
    

    //Select Destination
    print_destinations();
    printf("\nSelect a destination (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: distance_ly = 4.37; break;
        case 2: distance_ly = 8.6; break;
        case 3: distance_ly = 26600.0; break;
        case 4: distance_ly = 2537000.0; break;
        case 5:
            printf("Enter distance in Light-Years: ");
            scanf("%lf", &distance_ly);
            break;
        default:
            printf("Invalid selection! Defaulting to Alpha Centauri (4.37 LY).\n");
            distance_ly = 4.37;
    }

    //Get Velocity Input
    printf("\nEnter spacecraft speed as a fraction of 'c' (e.g., 0.5 to 0.9999): ");
    scanf("%lf", &beta);

    // Validate velocity limits
    if (beta <= 0.0 || beta >= 1.0) {
        printf("\n[Error] Speed must be greater than 0 and strictly LESS than 1.0 (speed of light)!\n");
        return 1;
    }

    //Get Spacecraft Mass
    printf("Enter ship mass in metric tons (e.g., 1000 for a heavy starship): ");
    scanf("%lf", &ship_mass_kg);
    ship_mass_kg *= 1000.0; // Convert metric tons to kilograms

    // --- RELATIVISTIC CALCULATIONS ---
    double gamma = calculate_gamma(beta);
    
    // Time elapsed on Earth (in years) = Distance / Speed
    double earth_time_years = distance_ly / beta;
    
    // Time elapsed on the Ship = Earth Time / Gamma
    double ship_time_years = earth_time_years / gamma;
    
    // Contracted distance felt by the ship
    double contracted_distance_ly = distance_ly / gamma;

    // Relativistic Kinetic Energy: E = (gamma - 1) * m * c^2
    double c = SPEED_OF_LIGHT;
    double kinetic_energy_joules = (gamma - 1.0) * ship_mass_kg * (c * c);

    // --- RENDER RESULTS ---
    printf("\n==================================================\n");
    printf("                 MISSION REPORT                   \n");
    printf("==================================================\n");
    printf("Target Distance (Earth Frame) : %.2f Light-Years\n", distance_ly);
    printf("Travel Speed                   : %.4fc (%.2f%% speed of light)\n", beta, beta * 100.0);
    printf("Lorentz Factor (Gamma)         : %.4f\n", gamma);
    printf("--------------------------------------------------\n");
    printf("TIME ELAPSED ON EARTH          : %.2f Years\n", earth_time_years);
    printf("TIME ELAPSED FOR ASTRONAUTS    : %.2f Years\n", ship_time_years);
    printf("CONTRACTED DISTANCE SEEN BY SHIP: %.2f Light-Years\n", contracted_distance_ly);
    printf("--------------------------------------------------\n");
    printf("REQUIRED KINETIC ENERGY        : %.3e Joules\n", kinetic_energy_joules);
    printf("==================================================\n");

    // Theoretical Insight
    double time_saved = earth_time_years - ship_time_years;
    printf("\n[Insight]: Due to time dilation, the crew aged %.2f years LESS than their family on Earth!\n", time_saved);

    return 0;
}

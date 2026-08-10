# 🌌 Black Hole Simulator — BHS

> A long-term C++ computational-physics project evolving from a simple particle simulation into a 3D black-hole simulator, scientific analysis platform, and potentially a meaningful quantum-computing experiment.

**Status:** 🚧 Under Development

---

# 🧭 Project Philosophy

BHS is built incrementally:

**Learn → Build → Break → Debug → Understand → Upgrade**

Each major version represents a different stage:

- **BHS 0.x** — Simulation fundamentals
- **BHS 1.x** — 3D black-hole simulation and increasingly realistic physics
- **BHS 2.x** — Scientific computing, numerical experiments, and validation
- **BHS 3.x** — Investigation of meaningful quantum-computing applications

Later stages are provisional. Physics models, numerical methods, and the quantum component will be chosen based on what we learn during development rather than being forced into the project.

**The goal is not to make BHS look scientifically impressive.  
The goal is to make it scientifically defensible.**

---

# 🟢 BHS 0.x — Simulation Foundations

## BHS-0.1 — Basic Raylib Environment

### Goal
Create the first graphical simulation environment.

- [x] C++ project setup
- [x] Raylib installation
- [x] Raylib configuration
- [x] Create graphical window
- [x] Understand basic Raylib structure
- [x] Understand 2D coordinates
- [x] Understand the game loop
- [x] Display first particle

**Status:** ✅ Complete

---

## BHS-0.2 — Particle Movement

### Goal
Make the particle move through 2D space.

- [ ] Position variables
- [ ] Velocity
- [ ] Direction
- [ ] Time-based movement
- [ ] Frame-independent movement
- [ ] User-controlled movement
- [ ] Understand simulation state

**Status:** ✅ Complete

---

## BHS-0.3 — Acceleration

### Goal
Introduce changing velocity.

- [ ] Understand acceleration
- [ ] Implement acceleration
- [ ] Update velocity from acceleration
- [ ] Update position from velocity
- [ ] Basic numerical integration
- [ ] Test different acceleration values
- [ ] Observe motion changes

**Status:** ⏳ Planned

---

## BHS-0.4 — Central Gravity

### Goal
Introduce the first physical force.

- [ ] Introduce mass
- [ ] Create massive central object
- [ ] Calculate distance
- [ ] Calculate gravitational force
- [ ] Calculate gravitational acceleration
- [ ] Apply gravity to particle
- [ ] Observe falling motion

**Status:** ⏳ Planned

---

## BHS-0.5 — Orbital Motion

### Goal
Turn falling particles into orbiting particles.

- [ ] Initial velocity
- [ ] Circular orbit
- [ ] Elliptical orbit
- [ ] Different orbital velocities
- [ ] Escape trajectory
- [ ] Capture trajectory
- [ ] Investigate orbital stability

**Status:** ⏳ Planned

---

## BHS-0.6 — Multiple Particles

### Goal
Move from one particle to a particle system.

- [ ] Create Particle structure
- [ ] Store multiple particles
- [ ] Use C++ vectors
- [ ] Update multiple particles
- [ ] Render multiple particles
- [ ] Experiment with hundreds of particles
- [ ] Investigate simulation performance

**Status:** ⏳ Planned

---

## BHS-0.7 — Trajectories

### Goal
Visualize the history of particle motion.

- [ ] Store previous positions
- [ ] Draw particle trails
- [ ] Display orbital paths
- [ ] Control trail length
- [ ] Compare different trajectories
- [ ] Visualize capture and escape paths

**Status:** ⏳ Planned

---

## BHS-0.8 — Simulation Controls

### Goal
Make the simulation interactive.

- [ ] Pause
- [ ] Resume
- [ ] Reset
- [ ] Time scaling
- [ ] Spawn particles
- [ ] Remove particles
- [ ] Change central mass
- [ ] Change particle velocity
- [ ] Change starting position
- [ ] Basic keyboard controls

**Status:** ⏳ Planned

---

## BHS-0.9 — Simulation Architecture

### Goal
Prepare the project for serious expansion.

- [ ] Clean up temporary code
- [ ] Separate physics from rendering
- [ ] Separate simulation state
- [ ] Create reusable classes/structures
- [ ] Organize source files
- [ ] Improve naming
- [ ] Remove unnecessary hacks
- [ ] Add basic documentation
- [ ] Prepare architecture for 3D

**Status:** ⏳ Planned

---

# 🔵 BHS 1.x — 3D Black Hole Simulator

## BHS-1.0 — Enter 3D

### Goal
Move the simulation from 2D into 3D space.

- [ ] Learn Vector3
- [ ] Implement 3D positions
- [ ] Implement 3D velocity
- [ ] Implement 3D acceleration
- [ ] Learn Raylib Camera3D
- [ ] Create 3D scene
- [ ] Render 3D particles
- [ ] Camera movement
- [ ] 3D trajectories

**Status:** ⏳ Planned

---

## BHS-1.1 — 3D Gravity

### Goal
Build the Newtonian gravitational model in 3D.

- [ ] 3D distance calculations
- [ ] 3D gravitational acceleration
- [ ] Central mass
- [ ] 3D particle motion
- [ ] Stable 3D orbits
- [ ] Test different orbital planes
- [ ] Test different initial conditions

**Status:** ⏳ Planned

---

## BHS-1.2 — 3D Orbital Systems

### Goal
Explore more complex orbital geometry.

- [ ] Inclined orbits
- [ ] Multiple orbital planes
- [ ] Non-circular orbits
- [ ] Complex trajectories
- [ ] Multiple-particle systems
- [ ] Orbital visualization
- [ ] Camera controls for exploration

**Status:** ⏳ Planned

---

## BHS-1.3 — Gravitational Field Visualization

### Goal
Visualize the gravitational environment around a massive object.

- [ ] 3D spatial grid
- [ ] Calculate gravitational field
- [ ] Visualize field strength
- [ ] Visualize potential
- [ ] Interactive field visualization
- [ ] Compare field at different distances

> The visualization should be treated as a mathematical model, not literally as a physical "fabric of space."

**Status:** ⏳ Planned

---

## BHS-1.4 — Black Hole Model

### Goal
Introduce the black hole itself.

- [ ] Study Schwarzschild radius
- [ ] Implement black-hole mass
- [ ] Calculate Schwarzschild radius
- [ ] Represent event horizon
- [ ] Define capture region
- [ ] Prevent classical particles from escaping after capture
- [ ] Visualize black-hole boundary

**Status:** ⏳ Planned

---

## BHS-1.5 — Black-Hole Particle Trajectories

### Goal
Study how particles behave near a black hole.

- [ ] Particle approaches
- [ ] Capture trajectories
- [ ] Escape trajectories
- [ ] Orbital trajectories
- [ ] Near-horizon trajectories
- [ ] High-velocity trajectories
- [ ] Compare trajectories at different starting radii
- [ ] Visualize trajectory classification

**Status:** ⏳ Planned

---

## BHS-1.6 — Accretion Disk

### Goal
Build a visual and computational model of an accretion disk.

- [ ] Create disk particles
- [ ] Orbital motion
- [ ] Radial distribution
- [ ] Disk thickness
- [ ] Particle density
- [ ] Visual disk structure
- [ ] Study orbital velocity across disk
- [ ] Experiment with disk parameters

> Initially this will be a simplified model, not a full relativistic magnetohydrodynamic simulation.

**Status:** ⏳ Planned

---

## BHS-1.7 — Light & Gravitational Lensing

### Goal
Move beyond massive particles and simulate light paths.

- [ ] Introduce photons/light rays
- [ ] Ray trajectories
- [ ] Light bending
- [ ] Deflection angle
- [ ] Gravitational lensing
- [ ] Photon capture
- [ ] Visualize distorted background
- [ ] Explore photon sphere behavior

**Status:** ⏳ Planned

---

## BHS-1.8 — Relativistic Physics

### Goal
Move from Newtonian gravity toward general-relativistic modeling.

- [ ] Understand limitations of Newtonian gravity
- [ ] Study special relativity foundations
- [ ] Study Schwarzschild spacetime
- [ ] Learn metric concepts
- [ ] Learn geodesics
- [ ] Derive simplified equations of motion
- [ ] Implement relativistic approximation
- [ ] Implement geodesic motion where appropriate
- [ ] Compare Newtonian and relativistic trajectories
- [ ] Document assumptions and approximations

**Physics first. Visualization second.**

**Status:** ⏳ Planned

---

## BHS-1.9 — Scientific Simulation Controls

### Goal
Turn BHS into an experimentable simulation environment.

- [ ] Black-hole mass control
- [ ] Starting radius control
- [ ] Initial velocity control
- [ ] Velocity direction control
- [ ] Orbital inclination
- [ ] Simulation time
- [ ] Time-step control
- [ ] Integration method selection
- [ ] Particle count
- [ ] Simulation reset
- [ ] Parameter display
- [ ] Basic measurement display

**Status:** ⏳ Planned

---

# 🟣 BHS 2.x — Scientific Computing & Analysis

## BHS-2.0 — Simulation Data Pipeline

### Goal
Connect the C++ simulator to scientific analysis tools.

- [ ] Design simulation-data format
- [ ] Export particle positions
- [ ] Export velocities
- [ ] Export acceleration
- [ ] Export simulation time
- [ ] Export physical parameters
- [ ] Export relevant conserved quantities
- [ ] CSV/structured data output
- [ ] Build Python data loader
- [ ] Reproduce trajectories from exported data

**Status:** ⏳ Planned

---

## BHS-2.1 — Python Scientific Analysis

### Goal
Analyze BHS simulations scientifically.

- [ ] Python analysis environment
- [ ] NumPy
- [ ] Matplotlib
- [ ] Load simulation data
- [ ] Plot trajectories
- [ ] Position vs time
- [ ] Velocity vs time
- [ ] Radial distance vs time
- [ ] Orbital measurements
- [ ] Numerical error analysis
- [ ] Automated plotting
- [ ] Generate experiment reports

**Status:** ⏳ Planned

---

## BHS-2.2 — Numerical Integration

### Goal
Understand and compare numerical methods.

- [ ] Study Euler integration
- [ ] Implement Euler
- [ ] Study semi-implicit Euler
- [ ] Implement semi-implicit Euler
- [ ] Study Verlet / Velocity Verlet
- [ ] Implement appropriate Verlet method
- [ ] Study Runge-Kutta methods
- [ ] Implement RK4 where appropriate
- [ ] Compare accuracy
- [ ] Compare stability
- [ ] Compare computational cost
- [ ] Study effect of time-step size

**Status:** ⏳ Planned

---

## BHS-2.3 — Conservation & Validation

### Goal
Determine whether the simulation is behaving correctly.

- [ ] Energy conservation tests
- [ ] Angular momentum tests
- [ ] Numerical drift analysis
- [ ] Time-step convergence tests
- [ ] Integration-method comparison
- [ ] Analytical benchmark cases
- [ ] Error measurements
- [ ] Automated validation tests
- [ ] Establish simulation accuracy limits

**Status:** ⏳ Planned

---

## BHS-2.4 — Orbital Experiments

### Goal
Use BHS as an experimental platform.

- [ ] Define controlled experiments
- [ ] Circular orbit experiment
- [ ] Elliptical orbit experiment
- [ ] Escape experiment
- [ ] Capture experiment
- [ ] Vary initial velocity
- [ ] Vary starting radius
- [ ] Measure orbital properties
- [ ] Classify trajectories
- [ ] Automate repeated experiments
- [ ] Generate comparison plots

**Status:** ⏳ Planned

---

## BHS-2.5 — Newtonian vs Relativistic Comparison

### Goal
Quantify the difference between physical models.

- [ ] Define equivalent initial conditions
- [ ] Run Newtonian model
- [ ] Run relativistic model
- [ ] Compare trajectories
- [ ] Measure trajectory divergence
- [ ] Compare orbital behavior
- [ ] Identify where Newtonian approximation breaks down
- [ ] Visualize differences
- [ ] Quantify model disagreement

**Status:** ⏳ Planned

---

## BHS-2.6 — Relativistic Validation

### Goal
Test the relativistic model against known results.

- [ ] Identify analytically known cases
- [ ] Derive benchmark predictions
- [ ] Implement benchmark simulations
- [ ] Compare simulation with theoretical results
- [ ] Measure numerical error
- [ ] Test convergence
- [ ] Document assumptions
- [ ] Document limitations
- [ ] Establish validity range of the model

**Status:** ⏳ Planned

---

## BHS-2.7 — Parameter Sweeps

### Goal
Turn BHS into a large-scale experiment generator.

- [ ] Automated parameter sweeps
- [ ] Vary black-hole mass
- [ ] Vary starting radius
- [ ] Vary initial velocity
- [ ] Vary orbital inclination
- [ ] Vary time step
- [ ] Vary integration method
- [ ] Batch simulations
- [ ] Store experiment metadata
- [ ] Analyze large numbers of trajectories
- [ ] Generate parameter maps
- [ ] Identify interesting regions

**Status:** ⏳ Planned

---

## BHS-2.8 — Performance & Scale

### Goal
Understand and improve simulation performance.

- [ ] Profile C++ simulation
- [ ] Identify bottlenecks
- [ ] Optimize particle updates
- [ ] Improve memory usage
- [ ] Benchmark particle counts
- [ ] Benchmark simulation speed
- [ ] Investigate multithreading
- [ ] Implement parallel computation where justified
- [ ] Investigate GPU acceleration only if necessary
- [ ] Document performance characteristics

**Status:** ⏳ Planned

---

## BHS-2.9 — Scientific Reproducibility

### Goal
Make experiments repeatable and scientifically documented.

- [ ] Document equations
- [ ] Document assumptions
- [ ] Document numerical methods
- [ ] Document simulation parameters
- [ ] Record experiment configurations
- [ ] Reproduce previous experiments
- [ ] Automate experiment execution
- [ ] Store experiment results
- [ ] Generate reproducible plots
- [ ] Create technical documentation
- [ ] Write scientific/technical report

**Status:** ⏳ Planned

---

# ⚛️ BHS 3.x — Quantum Computing Research

## BHS-3.0 — Quantum Research Question

### Goal
Determine whether a meaningful quantum-computing problem exists within or around BHS.

- [ ] Identify computational problems arising from BHS
- [ ] Investigate possible quantum formulations
- [ ] Study relevant quantum algorithms
- [ ] Determine whether quantum computing is appropriate
- [ ] Estimate qubit requirements
- [ ] Estimate circuit complexity
- [ ] Determine simulation feasibility
- [ ] Establish a classical baseline
- [ ] Select a specific research question

> Qiskit will NOT be added merely because it is interesting. A genuine computational or scientific reason must exist.

**Status:** ⏳ Planned

---

## BHS-3.1 — Classical Baseline

### Goal
Solve the selected problem classically before attempting a quantum approach.

- [ ] Define the problem mathematically
- [ ] Define inputs and outputs
- [ ] Implement classical solution
- [ ] Validate classical solution
- [ ] Benchmark runtime
- [ ] Measure accuracy
- [ ] Analyze scaling
- [ ] Document classical limitations

**Status:** ⏳ Planned

---

## BHS-3.2 — Quantum Formulation

### Goal
Translate the selected problem into a quantum-computing formulation.

- [ ] Study required quantum concepts
- [ ] Define quantum state representation
- [ ] Choose encoding
- [ ] Define operators
- [ ] Define Hamiltonian if applicable
- [ ] Determine circuit structure
- [ ] Estimate qubit requirements
- [ ] Estimate gate requirements
- [ ] Identify approximation requirements
- [ ] Document theoretical limitations

**Status:** ⏳ Planned

---

## BHS-3.3 — Qiskit Prototype

### Goal
Build a minimal proof-of-concept quantum experiment.

- [ ] Install/configure Qiskit
- [ ] Build minimal circuit
- [ ] Simulate circuit
- [ ] Verify expected behavior
- [ ] Compare with mathematical prediction
- [ ] Test different parameters
- [ ] Analyze measurement results
- [ ] Visualize quantum results

> Start with a small system. Prove the concept before attempting to scale it.

**Status:** ⏳ Planned

---

## BHS-3.4 — Quantum vs Classical

### Goal
Compare both approaches honestly.

- [ ] Run identical problem instances
- [ ] Compare accuracy
- [ ] Compare runtime
- [ ] Compare scaling
- [ ] Compare resource requirements
- [ ] Analyze classical limitations
- [ ] Analyze quantum limitations
- [ ] Determine whether quantum approach provides any practical benefit
- [ ] Do not claim quantum advantage without evidence

**Status:** ⏳ Planned

---

## BHS-3.5 — Noise & Realistic Quantum Hardware

### Goal
Investigate how realistic quantum hardware affects the experiment.

- [ ] Introduce noise models
- [ ] Study decoherence
- [ ] Study gate errors
- [ ] Run noisy simulations
- [ ] Compare ideal vs noisy results
- [ ] Investigate error mitigation
- [ ] Measure noise impact
- [ ] Run on real quantum hardware if appropriate
- [ ] Document hardware limitations

**Status:** ⏳ Planned

---

## BHS-3.6 — Quantum Experiment Integration

### Goal
Connect the quantum experiment back to BHS.

- [ ] Define interface between BHS and quantum experiment
- [ ] Extract relevant BHS parameters
- [ ] Convert parameters into quantum input
- [ ] Run quantum experiment
- [ ] Retrieve quantum results
- [ ] Compare quantum results with BHS
- [ ] Analyze differences
- [ ] Determine whether integration is scientifically meaningful

**Status:** ⏳ Planned

---

## BHS-3.7 — Quantum Visualization & Analysis

### Goal
Visualize and analyze the quantum results alongside classical simulations.

- [ ] Import quantum results into Python
- [ ] Plot probability distributions
- [ ] Compare classical and quantum results
- [ ] Visualize parameter effects
- [ ] Visualize errors
- [ ] Analyze statistical uncertainty
- [ ] Integrate results into BHS analysis pipeline
- [ ] Create combined visualizations

**Status:** ⏳ Planned

---

## BHS-3.8 — Research Release

### Goal
Turn the project into a complete research-oriented computational project.

- [ ] Finalize C++ simulator
- [ ] Finalize Raylib visualization
- [ ] Finalize physical models
- [ ] Finalize numerical methods
- [ ] Finalize Python analysis
- [ ] Finalize experiments
- [ ] Finalize Qiskit experiment if justified
- [ ] Complete classical vs quantum comparison
- [ ] Document assumptions
- [ ] Document limitations
- [ ] Document methodology
- [ ] Document results
- [ ] Create reproducible experiments
- [ ] Create technical report
- [ ] Prepare final project presentation
- [ ] Prepare final GitHub documentation

**Status:** ⏳ Planned

---

# 🌌 Final BHS Architecture

```text
                         BLACK HOLE SIMULATOR
                                  │
              ┌───────────────────┼───────────────────┐
              │                   │                   │
              ▼                   ▼                   ▼
          C++ / Raylib       Python / NumPy       Qiskit
              │                   │                   │
          Simulation           Analysis            Quantum
              │                   │                   │
              ▼                   ▼                   ▼
       Particle Physics     Scientific Data     Quantum Experiment
              │                   │                   │
              └───────────────────┼───────────────────┘
                                  │
                                  ▼
                         Scientific Results

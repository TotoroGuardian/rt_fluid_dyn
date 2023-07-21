# rt_fluid_dyn
Optimization project based on Real-Time Fluid Dynamics for Games by Jos Stam
Based on "A Simple Fluid Solver based on the FFT", Journal of Graphics Tools,  Volume 6, Number 2, 2001, 43-527

The main objective of this project is to optimize the code proposed in this article.
As much as possible, the different steps of optimization will be distinguished in their own source code and binaries.
In time, one or multiple efficiency test environments should be implemented to showcase the benefits in throughput and latency offered by the optimizations.

Optimizations here will relate to any technique related to code acceleration,
from a modification of the algorithm (giving results identical or high precision distant from the original),
maximizing usage of CPU hardware through cachefriendliness, loop unrolling, compiler optimizations or vector instructions,
to concurrent, heterogeneous and distributed solutions.

This is by all means a toy and experimental project whose goal for me, the programmer, is to practice different tools and method of optimizations
as well as source of experiments to further and refine my understanding of which optimization produces which order of appreciation, and how those optimizations
can interact with each other.

If maintained properly, this project could be used as a way for me to showcase the range of technique I am familiar with in the domain.



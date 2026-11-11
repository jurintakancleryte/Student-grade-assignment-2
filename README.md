    # Student Grade Management System – V1.1
     
    ## 1. Introduction
     
    This project extends V1.0 by comparing the performance of Student implementations using `struct` and `class`, and evaluating compiler optimization levels.
     
    ## 2. V1.1 Changes
     
    - Added a struct-based implementation for comparison with the existing class-based implementation.
    - Compared execution time using `std::vector`.
    - Tested datasets containing 100,000 and 1,000,000 students.
    - Evaluated compiler optimization levels: `-O1`, `-O2`, and `-O3`.

     
    ## 3. Struct vs Class Performance Comparison
     
    ### Methodology
     
    - Container: `std::vector`
    - Separation strategy: Fastest strategy from V1.0
    - Dataset sizes: 100,000 and 1,000,000 students
    - Repetitions: 5 runs
    - Measurement: Average separation execution time
     
    ### Results
     
    | Dataset | Struct (seconds) | Class (seconds) |
    |---|---:|---:|
    | 100,000 | 0.06928 |  0.07012 |
    | 1,000,000 | 1.00011 | 0.38488 |
     
     
    ## 4. Compiler Optimization Comparison
     
    Tested optimization levels: `-O1`, `-O2`, and `-O3`.
     
    ### Results
     
    | Implementation | Dataset | Optimization | Execution Time | Executable Size |
    |---|---|---|---|---|
    | Struct | 100K | O1 | 0.11038 | 127 kb |
    | Struct | 100K | O2 | 0.04735 | 226 kb |
    | Struct | 100K | O3 | 0.09990 | 127 kb |
    | Class | 100K | O1 | 0.29748 | 126 kb |
    | Class | 100K | O2 | 0.09141 | 224 kb |
    | Class | 100K | O3 | 0.17502 | 126 kb |
     
    Include equivalent rows for the 1M dataset.

    Bench marking results 
    1. Struct 
    
    ![alt text](<Screenshot 2026-11-11 at 9.44.26 PM.png>)
    

    2. Classes

    ![alt text](<Screenshot 2026-11-11 at 9.39.27 PM.png>)
    ![alt text](<Screenshot 2026-11-11 at 9.39.22 PM.png>)

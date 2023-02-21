#include <iostream>
#include <windows.h> // Required for Beep() function
#include <chrono> // Required for sleep_for() function
#include <thread>
using namespace std::chrono_literals; // Define the namespace for 1ms and 1s

int main() {
    // Define note frequencies
    const int C = 523;
    const int D = 293;
    const int Fs = 370;
    const int G = 392;
    const int A = 440;
    const int B = 493;
    const int Db = 277;
    const int Eb = 311;
    const int E = 329;
    const int Bb = 466;
    double bpm = 150;
    double bps = bpm/ 60;
    // Define note durations
    const int quarter = static_cast<int>(1000/bps);
    const int half = static_cast<int>(1000*2/bps);
    const int whole = static_cast<int>(1000*4/bps);

    // Define Pink Panther notes and durations
    int notes[] = {Db, D, Eb, E, Fs, G, Eb, E, Fs, G, C, B, E, G, B, Bb, A, G, E, D, E};
    int durations[] = {quarter, quarter, quarter, half, quarter, half, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, quarter, whole, quarter, quarter, quarter, quarter, whole};

    // Play Pink Panther theme song
    Beep(notes[0], durations[0]);
    Beep(notes[1], durations[1]);
    Beep(notes[2], durations[2]);
    Beep(notes[3], durations[3]);
    std::this_thread::sleep_for(std::chrono::milliseconds(quarter));
    Beep(notes[4], durations[4]);
    Beep(notes[5], durations[5]);
    std::this_thread::sleep_for(std::chrono::milliseconds(quarter));
    Beep(notes[6], durations[6]);
    Beep(notes[7], durations[7]);
    Beep(notes[8], durations[8]);
    Beep(notes[9], durations[9]);
    Beep(notes[10], durations[10]);
    Beep(notes[11], durations[11]);
    Beep(notes[12], durations[12]);
    Beep(notes[13], durations[13]);
    Beep(notes[14], durations[14]);
    Beep(notes[15], durations[15]);
    std::this_thread::sleep_for(std::chrono::milliseconds(quarter));
    Beep(notes[16], durations[16]);
    Beep(notes[17], durations[17]);
    Beep(notes[18], durations[18]);
    Beep(notes[19], durations[19]);
    Beep(notes[20], durations[20]);

    return 0;
}


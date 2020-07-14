package com.company;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Util {
    BufferedReader Input = new BufferedReader(new InputStreamReader(System.in));

    static float RandomFloat(float UpperBound) {
        return (float)Math.random() * UpperBound;
    }
}

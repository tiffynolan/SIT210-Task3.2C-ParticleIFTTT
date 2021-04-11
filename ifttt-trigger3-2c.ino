int comparer = 3;
int lightMeasure = 0;

void setup() 
{
}

void loop() 
{
    lightMeasure = int(random(0, 2));
    
    if(comparer == 3)
    {
        if(lightMeasure == 0)
        {
            Particle.publish("light", "sunny");
        }
        else
        {
            Particle.publish("dark", "night");
        }
    }
    
    else if(comparer == 0 && lightMeasure == 1)
    {
        Particle.publish("dark", "night");
    }
    
    else if(comparer == 1 && lightMeasure == 0)
    {
        Particle.publish("light", "sunny");
    }

    comparer = lightMeasure;
    
    delay(30000);               // Wait for 30 secs
}
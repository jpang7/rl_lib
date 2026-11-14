import gymnasium as gym
import numpy as np
import subprocess

env = gym.make("LunarLander-v3", render_mode="human")

proc = subprocess.Popen(['./build/naive_lander'],
                        stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
# Reset the environment to generate the first observation
observation, info = env.reset(seed=42)
for _ in range(1000):
    observation_str = ' '.join(observation.astype(str)) + '\n'
    proc.stdin.write(observation_str)
    proc.stdin.flush()
    # this is where you would insert your policy
    action = int(proc.stdout.readline())

    # step (transition) through the environment with the action
    # receiving the next observation, reward and if the episode has terminated or truncated
    observation, reward, terminated, truncated, info = env.step(action)

    # If the episode has ended then we can reset to start a new episode
    if terminated or truncated:
        observation, info = env.reset()

env.close()
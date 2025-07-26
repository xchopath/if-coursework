
### Requirements

```
sudo apt-get update
sudo apt-get install cmake pkg-config -y
sudo apt-get install mesa-utils libglu1-mesa-dev freeglut3-dev mesa-common-dev -y
sudo apt-get install libglew-dev libglfw3-dev libglm-dev -y
sudo apt-get install libao-dev libmpg123-dev -y
```

### Download

```sh
wget https://raw.githubusercontent.com/xchopath/if-coursework/refs/heads/master/grafika-komputer/OpenGL/sphere.cpp
```

### Compile

```sh
g++ sphere.cpp -o sphere -lGL -lGLU -lglut
```

### Run

```sh
./sphere
```

<img width="809" height="641" alt="image" src="https://github.com/user-attachments/assets/16cee2f1-9842-47bc-814f-fe6a75bc7b20" />

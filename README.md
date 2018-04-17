# glBasic

Create projects quickly for OpenGL development. Inspired by [Glitter](https://github.com/Polytonic/Glitter).

glBasic automatically includes and links glad, glfw, glm, and [stb_image](https://github.com/nothings/stb) to your project.

It also allows you to add template files (code, shaders, textures...) which will be copied and added to each created project.

CMake is required for building.

# How to use it

### 1. Clone
Clone this repository using the following command (the <b>--recursive</b> part is important because it tells git to download the linked repositories - glad, glfw and glm):
```bash
git clone --recursive https://github.com/jjovanovski/glBasic.git
```

### 2. Build a project using CMake

Open the directory where you cloned this repo and create new folder for your new project (example: MyProject).

Then open CMake and enter the path to the cloned repo as the path-to-source and the path to the new project folder as path-to-build-binaries.

Press Configure and choose your prefered options.

I recommend that you rename your project to something more meaningful.

Press Generate.

Now navigate to the project directory and open your project.

![](https://image.ibb.co/eRqgbn/gl_Basic_CMake.jpg)

### 3. Change the default template files

glBasic allows you to add template files (code, shaders, textures...) which will be copied and added to each created project.

In the directory where you cloned this repo you can find the <b>template directory</b>. All files contained in this directory will be automatically added to every project you create. This is useful for stuff like classes and shaders that you use in multiple projects.

--------

### Note:
I have a feeling there are some bugs, so if you find one please contact me (preferably with a solution :)): jovanovskijovan97@gmail.com

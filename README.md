# GAT350-RayTracer

A simple ray-tracer project implemented in C++, built for the GAT350 graphics assignment.  
This project demonstrates a basic ray tracing pipeline including scene setup, ray casting, and shading.

## 📂 Project Structure

```
/Build/               — Build files and Visual Studio solution/project  
/Source/              — C++ source code for the ray tracer  
/ThirdParty/          — Any third-party libraries or dependencies  
RayTracer.sln         — Visual Studio solution file  
RayTracer.vcxproj     — Visual Studio project file  
```

## 🛠️ Requirements & Build Instructions

- Requires a C++ compiler (e.g., Visual Studio on Windows)  
- The repo includes a Visual Studio solution (`RayTracer.sln`) — simply open the solution and build it.  
- No external dependencies required (apart from any optional third-party libraries included under `ThirdParty/`).  

## 🎯 Features

- Basic ray casting algorithm  
- Scene description and rendering  
- Support for simple shading (e.g., diffuse lighting, background, etc.)  
- Output to standard image formats or console (as implemented)  

## 🚀 Getting Started

1. Clone the repository  
   ```bash
   git clone https://github.com/BaconEater314/GAT350-RayTracer.git
   ```  
2. Open `RayTracer.sln` in Visual Studio (or equivalent IDE)  
3. Build the solution  
4. Run the compiled executable — specify any scene/configuration (if supported) and view the rendered result  

## ✅ Usage / Example

*(Optionally include a simple example of how to run the ray tracer, command-line args, or what the output looks like — update this depending on how you set up your project.)*

```text
RayTracer.exe [scene_file] [output_image]
```

## 📄 License

*(If you plan to license your project — for example MIT, GPL, or custom license — add a LICENSE file and reference it here.)*

## 📝 Contributing

If you’d like to contribute improvements (support for more shading models, anti-aliasing, more complex scenes, etc.), feel free to open an Issue or submit a Pull Request!

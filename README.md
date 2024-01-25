# Welcome

This is a proposal for structuring your C++ video game. In this guide, I will teach you to use some convenient patterns. This is an experimental architecture, so it will undergo changes over time. Don't forget to leave your star to stay informed.

# Directories

- **dep**: Libraries necessary for our project.
- **src**: Files specific to our implementation.
  - **src/core**: Logical classes, such as custom types, that will be used by our entities.
  - **src/entities**: Stores interfaces, and while they could be considered part of the core, they are kept here to avoid nested subfolders.
  - **src/integration**: Implementation of the entities; it's recommended to group all implementations of an interface in a folder. Additionally, a builder interface is created to handle different ways of configuring the interfaces for the game.
  - **src/game**: The game domain.

# Patterns

- **Facade**: Allows us to bring together different entities. In this case, it applies to the `videogame` entity, where all entities converge, enabling communication between them and the application of global methods.
- **Builder**: Helps define the initial configuration of how an entity is created.
- **Factory**: Allows obtaining template objects. The Builder and Factory patterns are very similar as they both allow creating entities from templates; I would recommend using Factory if you want to create entities at runtime.
- **Dependency Injection**: In the constructor method of an object, it allows defining the attributes of the object from input parameters. Used to define implementations of interfaces.
- **Interfaces**: Provides flexibility to change the implementation of a certain class without having to resort to changing all the code.

# Practical Case

The classic game Snake will be used as an implementation example, and it has been slightly modified to test all architecture patterns.
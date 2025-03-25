# Guía sobre el archivo .gitignore  

## ¿Qué es un archivo .gitignore?  

El archivo `.gitignore` es un archivo de texto que le indica a Git qué archivos o directorios deben ser ignorados (no rastreados) en el repositorio. Esto es fundamental para mantener el repositorio ordenado y evitar la inclusión de archivos innecesarios o sensibles.  

## ¿Por qué es conveniente incluir un archivo .gitignore?  

- **Prevención de archivos temporales**: Elimina la posibilidad de subir archivos generados automáticamente, como cachés o compilaciones.  
- **Reducción de desorden**: Ayuda a mantener el repositorio limpio y fácil de manejar.  
- **Protección de información sensible**: Evita la inclusión de archivos que contengan credenciales o información privada.  

## ¿Cuándo se debe crear un archivo .gitignore?  

Es recomendable crear el archivo `.gitignore` al principio de un proyecto, antes de agregar archivos al repositorio. Esto garantiza que se definan de antemano qué elementos no deben ser rastreados.  

## ¿Cómo configurar el archivo .gitignore?  

La configuración del archivo depende de las necesidades específicas del proyecto. A continuación se presentan algunas directrices y ejemplos básicos:  

### Ejemplo de configuraciones comunes en .gitignore  

```gitignore  
# Ignorar archivos de sistema  
.DS_Store  
Thumbs.db  

# Ignorar archivos de configuración locales  
.env  
config/secrets.yml  

# Ignorar archivos de log  
logs/  
*.log  

# Ignorar el archivo 'ignorados.txt'  
ignorados.txt  
```

## Ejercicio 3 Apartado g

### Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

Se debe a que la direccion de la variable esta almacenada en el puntero, es decir, que el contenido del puntero es la direccion de la variable "num1". 
En el punto cuatro obtengo la direccion de memoria que se le asigno a la variable puntero.
Es una direccion de memoria distinta a las anteriores debido a que se trata de una variable distinta que tiene su propia direccion de memoria.
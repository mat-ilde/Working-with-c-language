
package gestionsupermercado;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author mati
 */
public class Almacen {
    
    private final Supermercado supermercado;
    private final List<Producto> productos = new ArrayList<>();
    private final String nombre;
    
    //Un constructor inicializa un objeto cuando se crea.
    Almacen(Supermercado supermercado, String nombre)
    {
        this.supermercado=supermercado;
        this.nombre=nombre;
    }
    
    /**
     * Devuelve una lista de productos
     * @return Una lista de los productos disponibles en el almacen
     */
    List<Producto> getProductos(){
        return this.productos;
    }
    
    /**
     * Añade un producto a la lista de productos del almacen
     * @param Recibe un producto de la clase Producto
     * @return Una lista de los productos disponibles en el almacen
     */
    void addProducto(Producto producto)
    {   
        this.productos.add(producto);
        // el almacen de ese producto es este
        producto.setAlmacen(this);
    }
    
    /**
     * Devuelve el nombre del almacen
     * @return Un string con el nombre del almacen
     */
    String getNombre()
    {
        
        return this.nombre;      
    }
    
    /**
     * Devuelve el producto mas barato del almacen
     * @return Producto devuelve el producto mas barato del almacen
     */
    Producto getCheapestProduct()
    {
        double minimumValue;
        int i;
        minimumValue=1000.00;
        Producto cheapProduct = null;
        int longitudProducto;
        //longitud de los productos en el almacen
        longitudProducto=this.productos.size();
        
        for(i= 0; i<longitudProducto;i=i+1){
          
            if(this.productos.get(i).getprecioVenta()<minimumValue)
            {   
                minimumValue=this.productos.get(i).getprecioVenta();
                cheapProduct=this.productos.get(i);
            }
        }
        return cheapProduct;
        
    }
}



interface Plugin {
    public void draw();
    public void save();
}

class TextEditorPlugin implements Plugin {
   public void draw() {
       System.out.println("Drawing text...");
   } 

   public void save() {
       System.out.println("Saving file...");
   }
}

class PDFViewerPlugin implements Plugin {
    public void draw() {
        System.out.println("Drawing PDF...");
    }

    public void save() {
        System.out.println("Saving pdf...");
    }
}

public class Runner09 {
    public static void main(String args[]) {
       //TextEditorPlugin p = new TextEditorPlugin();
       //p.draw();
       //p.save();

      //PDFViewerPlugin p = new PDFViewerPlugin();
      //p.draw();
      //p.save();
      
      //Plugin p = PluginFactory.getPluginFor("filename.pdf");

    }
}

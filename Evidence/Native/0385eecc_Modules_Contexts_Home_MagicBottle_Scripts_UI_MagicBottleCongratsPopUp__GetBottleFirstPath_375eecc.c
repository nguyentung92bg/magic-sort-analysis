/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$GetBottleFirstPath
UnityEngine_Vector3_array* Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__GetBottleFirstPath (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this, UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleCongratsPopUp$$GetBottleFirstPath
   UnityEngine_Vector3_array*
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__GetBottleFirstPath
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp_o* __this,
   UnityEngine_Vector3_o targetCenterPosition, const MethodInfo* method); */

void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleCongratsPopUp__GetBottleFirstPath_375eecc
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 0385eecc to 0395eed3 has its CatchHandler @ 0385eed4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0385eeb0 with catch @ 0385eed4
                       catch(type#2 @ 00000000) { ... } // from try @ 0385eecc with catch @ 0385eed4
                        */
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x18),0), lVar1 != 0)
     ) {
    UnityEngine_Transform__get_position_4092b08(lVar1,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30(0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


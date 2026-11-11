/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SetSelectedIndexViewDirectly
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexViewDirectly (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SetSelectedIndexViewDirectly
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexViewDirectly
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t index, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexViewDirectly_297d6c0
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2d740 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_0578c878);
    bRam0000000005c2d740 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_0578c878);
    puVar2 = PTR_DAT_057a5ca0;
    puVar1 = PTR_DAT_05778ae0;
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_38,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
      while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_38,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
        if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lStack_28,0,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$ReturnObject
void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__ReturnObject (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject_o* obj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$ReturnObject
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__ReturnObject
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject_o* obj, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__ReturnObject_2305028
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar1 = PTR_DAT_057fa318;
  if ((bRam0000000005c2a63b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fa318);
    FUN_012d0dc8(PTR_DAT_05782090);
    FUN_012d0dc8(PTR_DAT_057e6b38);
    bRam0000000005c2a63b = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action_object____ctor_1647468(lVar2,param_1,*(undefined8 *)PTR_DAT_05782090,0),
     param_2 != 0)) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__remove_OnRecycled_2d9738c
              (param_2,lVar2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetParent_2d974b4
                (param_2,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalPosition_2d97560
                (*puVar6,puVar6[1],puVar6[2],param_2,0);
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 != 0) {
        lVar5 = *(long *)PTR_DAT_057e6b38;
        lVar3 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x18) + 8))();
        if (lVar3 != 0) {
          uVar4 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x28) + 8))
                            (lVar3,param_2);
          if ((uVar4 & 1) != 0) {
            return;
          }
          lVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x18) + 8))
                            (lVar2);
          if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x031f96d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x20) + 8))
                      (lVar2,param_2);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


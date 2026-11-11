/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$GetObject
Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.OptimizedGameObjectFactory$$GetObject
   Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
    */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject_2304f00
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if ((bRam0000000005c2a63a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fa318);
    FUN_012d0dc8(PTR_DAT_05782090);
    FUN_012d0dc8(PTR_DAT_057ef4f8);
    bRam0000000005c2a63a = 1;
  }
  puVar1 = PTR_DAT_057fa318;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = Modules_Infrastructure_Common_Scripts_Pool_Pool_object___Get_30f96e0
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057ef4f8);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (System_Action_object____ctor_1647468(lVar3,param_1,*(undefined8 *)PTR_DAT_05782090,0),
       lVar2 != 0)) {
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__add_OnRecycled_2d972dc
                (lVar2,lVar3,0);
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__Spawn_2d9743c(lVar2,0);
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetParent_2d974b4
                (lVar2,param_2,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalPosition_2d97560
                (*puVar4,puVar4[1],puVar4[2],lVar2,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}


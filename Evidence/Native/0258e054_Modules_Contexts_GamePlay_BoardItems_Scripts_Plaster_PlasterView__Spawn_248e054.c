/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$Spawn
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Spawn (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterView$$Spawn
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Spawn
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Spawn_248e054(long *param_1)

{
  long lVar1;
  
  if (param_1[6] != 0) {
    UnityEngine_GameObject__SetActive_408e318(param_1[6],1,0);
    if ((param_1[4] != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1[4],0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x0258e0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

